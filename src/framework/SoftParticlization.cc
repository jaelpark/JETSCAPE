/*******************************************************************************
 * Copyright (c) The JETSCAPE Collaboration, 2017
 *
 * Modular, task-based framework
 * Intial Design: Joern Putschke, Kolja Kauder (Wayne State University)
 * For the full list of contributors see AUTHORS.

 * Report issues at https://github.com/JETSCAPE/JETSCAPE/issues
 * or via email to bugs.jetscape.org@gmail.com
 *
 * Distributed under the GNU General Public License 3.0 (GPLv3 or later).
 * See COPYING for details.
 ******************************************************************************/
// -----------------------------------------
// JETSCPAE module for soft particlization
// This module will generate Monte-Carlo samples for soft hadrons
// -----------------------------------------

#include "SoftParticlization.h"

namespace Jetscape {

SoftParticlization::SoftParticlization() {
}

SoftParticlization::~SoftParticlization() {
    for (unsigned i = 0; i < Hadron_list_.size(); i++) {
        Hadron_list_.at(i).clear();
    }
    Hadron_list_.clear();
}

void SoftParticlization::Init() {
    JetScapeModuleBase::Init();
    INFO << "Intialize Soft particlization module ... " << GetId() << " ...";
    xml_ = JetScapeXML::Instance()->GetXMLRoot()->FirstChildElement(
                                                        "SoftParticlization");
    if (!xml_) {
        WARN << " : Missing XML SoftParticlization section in file!";
        exit(-1);
    }

    InitTask();
}

void SoftParticlization::Exec() {

}

void SoftParticlization::Clear() {

}


}  // end namespace Jetscape
