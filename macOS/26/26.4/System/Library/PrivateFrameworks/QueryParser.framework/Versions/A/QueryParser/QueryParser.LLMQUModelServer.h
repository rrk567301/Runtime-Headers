@class _TtC11QueryParser16LLMQUModelServer;

@interface QueryParser.LLMQUModelServer : NSObject {
    void /* unknown type, empty encoding */ modelOnBehalfOfPID;
    void /* unknown type, empty encoding */ modelVersionNumber;
    void /* unknown type, empty encoding */ modelPrewarmTimeinMS;
}

@property (class, nonatomic, readonly) _TtC11QueryParser16LLMQUModelServer *shared;

- (void).cxx_destruct;
- (id)init;
- (void)parse:(id)a0 originatorPID:(id)a1 completion:(id /* block */)a2;
- (void)prewarmWithOriginatorPID:(long long)a0;

@end
