@class NSXPCConnection;

@interface TCPhraseCollector : NSObject {
    NSXPCConnection *_connection;
    char _valid;
}

+ (id)sharedInstance;

- (id)init;
- (char)isValid;
- (void).cxx_destruct;
- (id)connection;
- (void)setValid:(char)a0;
- (char)_initConnection;
- (void)collectSentence:(id)a0 language:(id)a1 phraseRanges:(id)a2;

@end
