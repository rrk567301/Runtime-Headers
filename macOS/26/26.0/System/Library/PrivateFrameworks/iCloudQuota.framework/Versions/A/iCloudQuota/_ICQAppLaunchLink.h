@class NSString, ICQLink, NSNumber;

@interface _ICQAppLaunchLink : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, nonatomic) ICQLink *link;
@property (readonly, nonatomic) NSNumber *minDisplayIntervalDays;
@property (readonly, nonatomic) BOOL isEligible;

- (void)encodeWithCoder:(id)a0;
- (id)initWithServerDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)cacheLiftUIContentIfNeeded;

@end
