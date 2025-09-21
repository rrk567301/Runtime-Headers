@class NSString;

@interface HMDLocationDefaultDataSource : NSObject <HMDLocationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeLocationManagerWithEffectiveBundle:(id)a0 delegate:(id)a1 onQueue:(id)a2;

@end
