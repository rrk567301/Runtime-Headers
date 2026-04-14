@class NSArray;

@interface ICQSubscriptionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isiCloudPlusSubscriber) BOOL iCloudPlusSubscriber;
@property (retain, nonatomic) NSArray *specifiersInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
