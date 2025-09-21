@class NSObject;
@protocol OS_dispatch_source;

@interface SignpostStreamEvent : SignpostEvent

@property (nonatomic) unsigned long long _totalFrameCount;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource;
@property (nonatomic) unsigned long long serialNumber;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (char)_hasTotalSkyLightCompositeCount;
- (id)_dictionaryRepresentationWithIsHumanReadable:(char)a0 shouldRedact:(char)a1;

@end
