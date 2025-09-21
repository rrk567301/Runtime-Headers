@interface SiriMessageTypes.SessionStartedMessage : SiriMessageTypes.SessionMessageBase {
    void /* unknown type, empty encoding */ languageCode;
    void /* unknown type, empty encoding */ understandingOnDevice;
    void /* unknown type, empty encoding */ isSystemAssistantExperienceEnabled;
    void /* unknown type, empty encoding */ userId;
    void /* unknown type, empty encoding */ clientAuditToken;
    void /* unknown type, empty encoding */ deferWarmup;
}

- (void).cxx_destruct;

@end
