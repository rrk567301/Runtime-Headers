@class NSString, NSArray, SKPublishedStatus;

@interface SKStatusSubscriptionMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *subscriptionIdentifier;
@property (readonly, nonatomic) NSString *statusTypeIdentifier;
@property (readonly, nonatomic, getter=isPersonalStatusSubscription) char personalStatusSubscription;
@property (readonly, nonatomic) SKPublishedStatus *currentStatus;
@property (readonly, nonatomic) NSArray *ownerHandles;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 isPersonalStatusSubscription:(char)a2 currentStatus:(id)a3 ownerHandles:(id)a4;

@end
