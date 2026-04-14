@class NSSet;

@interface SMABundleAccessOptions : NSObject

@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSSet *pathsToPurgeOnGraftFailureInEarlyBootTask;

- (id)init;
- (void).cxx_destruct;

@end
