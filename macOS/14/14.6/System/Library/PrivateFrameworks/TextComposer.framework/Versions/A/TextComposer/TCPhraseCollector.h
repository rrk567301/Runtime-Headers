@class NSXPCConnection;

@interface TCPhraseCollector : NSObject {
    NSXPCConnection *_connection;
    BOOL _valid;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)connection;
- (void)setValid:(BOOL)a0;
- (BOOL)_initConnection;
- (void)collectSentence:(id)a0 language:(id)a1 phraseRanges:(id)a2;

@end
