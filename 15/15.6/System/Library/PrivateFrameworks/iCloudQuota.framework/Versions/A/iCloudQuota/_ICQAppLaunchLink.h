@class NSString, ICQLink, NSNumber;

@interface _ICQAppLaunchLink : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, nonatomic) ICQLink *link;
@property (readonly, nonatomic) NSNumber *minDisplayIntervalDays;
@property (readonly, nonatomic) char isEligible;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cacheLiftUIContentIfNeeded;
- (id)initWithServerDictionary:(id)a0;

@end
