@interface SiriMessageTypes.UserIdentificationMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ userClassification;
    void /* unknown type, empty encoding */ userIdScores;
    void /* unknown type, empty encoding */ voiceIdScoreCard;
}

- (void).cxx_destruct;

@end
