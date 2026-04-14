@class NSString, BMDSL, BMDistributedContextSubscriptionConfiguration;

@interface BMDistributedContextSubscription : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) BMDSL *dsl;
@property (retain, nonatomic) NSString *subscribingDevice;
@property (retain, nonatomic) NSString *subscribedDevice;
@property (retain) BMDistributedContextSubscriptionConfiguration *configuration;

- (id)initFromDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 dsl:(id)a1 subscribingDevice:(id)a2 subscribedDevice:(id)a3 configuration:(id)a4;

@end
