@class NSArray;

@interface ICQSubscriptionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isiCloudPlusSubscriber) char iCloudPlusSubscriber;
@property (retain, nonatomic) NSArray *specifiersInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
