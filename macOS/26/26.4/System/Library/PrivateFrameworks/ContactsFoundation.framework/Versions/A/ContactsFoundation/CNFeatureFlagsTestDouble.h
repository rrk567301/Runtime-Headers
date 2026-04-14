@class NSString, NSMutableDictionary, CNUnfairLock;
@protocol CNFeatureFlags;

@interface CNFeatureFlagsTestDouble : NSObject <CNFeatureFlags> {
    NSMutableDictionary *_featureFlags;
    id<CNFeatureFlags> _fallback;
    CNUnfairLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isFeatureEnabled:(unsigned long long)a0;
- (id)initWithFeatureFlags:(id)a0;
- (void)setFeatureEnabled:(BOOL)a0 forFeature:(unsigned long long)a1;

@end
