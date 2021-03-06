#ifndef QA_TREE__HH
#define QA_TREE__HH
/** @file    tree
    @author  David Stewart
    @version draft 0.0
    @brief   simple tree used to build run QA cuts
    @date    2018.03.15
*/

using namespace std;

struct RunEnds : public TObject {
    /* RunEnds() {}; */
    /* ~RunEnds() {}; */
    int runId;
    int time_0;
    int time_1;
    int eventId_0;
    int eventId_1;
    long long int nEvents;
    ClassDef(RunEnds,1);
};

struct QA_event  : public TObject {
    // Et is the leading tower's Et
    // pt is the leading tracks' pt
    QA_event() {};
    int    runId;
    int    eventId;

    bool   trig_500001;
    bool   trig_500006;
    bool   trig_500018;
    bool   trig_500202;
    bool   trig_500206;
    bool   trig_500215;
    bool   trig_500808;
    bool   trig_500809;
    bool   trig_500904;
    bool   trig_9300;

    int    refmult;
    int    nGlobalTracks;
    int    nTracks;
    int    nPrimaryTracks;
    int    nGoodPrimaryTracks;
    int    nTofMatch;

    // for all primary tracks (pre-cuts)
    int    nIstHit;
    int    nSstHit;
    int    nPxl1Hit;
    int    nPxl2Hit;
    int    nHftHit;

    double ranking;
    double xPV;
    double yPV;
    double zPV;

    double zdcX;
    double bbcAdcES;
    double bbcAdcEL;
    double bbcAdcWS;
    double bbcAdcWL;

    double zdcSumAdcEast;
    double zdcSumAdcWest;

    //---- track variables
    double goodTrkRatio; // ratio of good to bad tracks
    double phiTrkMean;   // average phi of tracks
    double etaTrkMean;   // average eta of tracks
    double phiTrkLead;
    double etaTrkLead;
    double maxpt;
    double sumpt;

    // -- tower variables
    int    trigId;
    int    ntowTriggers;
    int    nHT1trigs;
    int    nHT2trigs;

    double maxEt;
    double sumEt;

    double maxTowAdc;
    double sumTowAdc;
    
    double phiEt;
    double etaEt;
    double phiEtMean;
    double etaEtMean;

    bool   maxEt_is_maxAdc;

    ClassDef(QA_event,1);
};
#endif
