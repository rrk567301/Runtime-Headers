@class NSArray, NSString, SKAProfilePushTopic;

@interface SKAStatusProfile : NSObject {
    void /* unknown type, empty encoding */ profileType;
    void /* function */ identifier;
    void /* function */ serverObservableAdopterName;
}

@property (class, nonatomic, readonly) NSArray *identifiersRequiringSelfSubscription;
@property (class, nonatomic, readonly) NSArray *identifiersEnabledForBiomeDonation;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long permission;
@property (nonatomic, readonly) BOOL requiresSelfSubscription;
@property (nonatomic, readonly) BOOL biomeDonationEnabled;
@property (nonatomic, readonly) double publishTTLSeconds;
@property (nonatomic, readonly) SKAProfilePushTopic *pushTopic;
@property (nonatomic, readonly) NSString *serverObservableAdopterName;
@property (nonatomic, readonly) BOOL shouldOverrideCreationDate;
@property (nonatomic, readonly) BOOL useSubscriptionCache;
@property (nonatomic, readonly) NSString *description;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
