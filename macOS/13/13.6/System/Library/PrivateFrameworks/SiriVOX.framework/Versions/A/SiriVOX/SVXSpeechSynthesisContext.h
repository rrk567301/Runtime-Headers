@class SVXAudioSessionAssertion, NSString, NSDictionary, SVXSpeechSynthesisRequest;
@protocol SVXTaskTracking;

@interface SVXSpeechSynthesisContext : NSObject {
    id /* block */ _preparation;
    id /* block */ _finalization;
}

@property (readonly, nonatomic) long long operationType;
@property (readonly, copy, nonatomic) SVXSpeechSynthesisRequest *request;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, copy, nonatomic) NSString *voiceName;
@property (readonly, nonatomic) long long gender;
@property (readonly, copy, nonatomic) NSDictionary *analyticsContext;
@property (nonatomic) BOOL handledPresynthesizedAudioRequest;
@property (nonatomic) BOOL handledSpeechRequest;
@property (nonatomic) BOOL isStreamingSynthesisRequest;
@property (readonly, nonatomic) id<SVXTaskTracking> taskTracker;
@property (retain, nonatomic) SVXAudioSessionAssertion *audioSessionAssertion;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)prepare;
- (void)finalizeWithResultType:(long long)a0 utteranceInfo:(id)a1 error:(id)a2;
- (id)initWithOperationType:(long long)a0 request:(id)a1 languageCode:(id)a2 voiceName:(id)a3 gender:(long long)a4 preparation:(id /* block */)a5 finalization:(id /* block */)a6 taskTracker:(id)a7 analyticsContext:(id)a8;

@end
