@class NSData, LACClientInfo;
@protocol LACEvaluationRequest;

@interface LACCompanionAuthenticationRequest : NSObject <LACCompanionAuthenticationRequestType> {
    void /* function */ acmContextData;
}

@property (nonatomic, readonly) NSData *acmContextData;
@property (nonatomic, readonly) LACClientInfo *clientInfo;
@property (nonatomic, readonly) long long companionType;
@property (nonatomic, readonly) id<LACEvaluationRequest> evaluationRequest;
@property (nonatomic) BOOL isFallbackAvailable;
@property (nonatomic, readonly) unsigned int identifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEvaluationRequest:(id)a0 clientInfo:(id)a1 companionType:(long long)a2;

@end
