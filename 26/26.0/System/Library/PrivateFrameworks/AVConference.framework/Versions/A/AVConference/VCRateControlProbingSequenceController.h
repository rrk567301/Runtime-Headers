@interface VCRateControlProbingSequenceController : NSObject {
    unsigned int _mode;
    unsigned int _rateSharingClientID;
    unsigned int _probingSequenceSize;
    unsigned int _probingSequenceID;
    unsigned int _probingSequenceAttemptCount;
    double _averagePacketLength;
}

@end
