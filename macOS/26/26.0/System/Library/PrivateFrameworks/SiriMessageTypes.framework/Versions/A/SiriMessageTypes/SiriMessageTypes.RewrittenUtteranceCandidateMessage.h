@interface SiriMessageTypes.RewrittenUtteranceCandidateMessage : SiriMessageTypes.TextBasedTRPCandidateMessage {
    void /* unknown type, empty encoding */ originalUserInput;
    void /* unknown type, empty encoding */ rewriteReason;
    void /* unknown type, empty encoding */ siriXRedirectContext;
}

- (void).cxx_destruct;

@end
