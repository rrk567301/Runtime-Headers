@class NSXPCConnection;

@interface TCPhraseCollector : NSObject {
    NSXPCConnection *_connection;
    BOOL _valid;
}

+ (id)sharedInstance;

- (void)setValid:(BOOL)a0;
- (id)init;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)_initConnection;
- (void)collectSentence:(id)a0 language:(id)a1 phraseRanges:(id)a2;

@end
