@class NSNumber, NSURL, NSArray;

@interface ICQTipCriteria : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *minimumRange;
@property (retain, nonatomic) NSNumber *maximumRange;
@property (retain, nonatomic) NSURL *criteriaURL;
@property (retain, nonatomic) NSArray *excludeApps;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
