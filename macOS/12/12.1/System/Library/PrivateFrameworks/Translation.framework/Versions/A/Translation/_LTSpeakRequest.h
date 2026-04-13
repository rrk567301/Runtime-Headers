@class NSString;

@interface _LTSpeakRequest : _LTTranslationRequest

@property (retain, nonatomic) NSString *text;
@property (nonatomic) double ttsPlaybackRate;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)requestContext;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (id)initWithLocalePair:(id)a0;

@end
