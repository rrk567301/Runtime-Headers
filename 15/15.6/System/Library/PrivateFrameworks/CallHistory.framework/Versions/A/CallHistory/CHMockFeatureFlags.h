@class NSString;

@interface CHMockFeatureFlags : NSObject <CHFeatureFlags>

@property (nonatomic, getter=keepCallsEnabled) char mockKeepCallsEnabled;
@property (readonly, nonatomic) char keepCallsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
