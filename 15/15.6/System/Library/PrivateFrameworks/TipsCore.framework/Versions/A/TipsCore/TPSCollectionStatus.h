@class NSString, NSDate;

@interface TPSCollectionStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char canNotify;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *activatedDate;
@property (copy, nonatomic) NSDate *firstViewedDate;
@property (copy, nonatomic) NSDate *featuredDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
