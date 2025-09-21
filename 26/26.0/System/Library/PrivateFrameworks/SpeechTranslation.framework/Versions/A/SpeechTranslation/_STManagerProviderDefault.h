@class NSString;
@protocol _STSpeechTranslatorManaging;

@interface _STManagerProviderDefault : NSObject <_STManagerProviding>

@property (readonly, nonatomic) id<_STSpeechTranslatorManaging> speechTranslatorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
