@class NSString, AFSpeakableUtteranceParser;

@interface SVXTStubExpressionParsingService : NSObject <SVXExpressionParsingServing> {
    AFSpeakableUtteranceParser *_englishStubParser;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)parseExpressions:(id)a0 targetDevice:(id)a1 reply:(id /* block */)a2;

@end
