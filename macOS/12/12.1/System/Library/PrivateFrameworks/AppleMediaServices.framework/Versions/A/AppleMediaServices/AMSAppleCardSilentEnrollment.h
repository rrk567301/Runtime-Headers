@class AMSBagKeySet, NSString;

@interface AMSAppleCardSilentEnrollment : NSObject <AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;
+ (id)gsTokenForAccount:(id)a0 error:(id *)a1;
+ (id)headersForAccount:(id)a0;


@end
