@class NSString;

@interface SKADatabaseSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSString *channelIdentifier;
@property (readonly, nonatomic) NSString *statusTypeIdentifier;
@property (readonly, nonatomic) NSString *applicationIdentifier;

- (void).cxx_destruct;
- (id)initWithCoreDataSubscriptionAssertion:(id)a0;
- (id)initWithChannelIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2;

@end
