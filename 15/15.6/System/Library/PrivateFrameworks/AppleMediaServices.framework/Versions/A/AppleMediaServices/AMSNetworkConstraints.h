@class NSString, AMSBagKeySet, NSMutableDictionary;

@interface AMSNetworkConstraints : NSObject <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) NSMutableDictionary *sizeLimits;
@property (readonly, getter=isAnyNetworkTypeEnabled) char anyNetworkTypeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_networkConstraintsForMediaType:(id)a0 withArray:(id)a1;
+ (id)createBagForSubProfile;
+ (id)networkConstraintsForMediaType:(id)a0 withBag:(id)a1;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_disableAllNetworkTypes;
- (id)_initWithStoreConstraintDictionary:(id)a0;
- (void)_setSizeLimit:(long long)a0 forNetworkType:(id)a1;
- (long long)_sizeLimitForNetworkType:(id)a0;
- (char)hasSizeLimitForNetworkType:(id)a0;
- (char)isEqualToConstraints:(id)a0;
- (long long)sizeLimitForNetworkType:(id)a0;

@end
