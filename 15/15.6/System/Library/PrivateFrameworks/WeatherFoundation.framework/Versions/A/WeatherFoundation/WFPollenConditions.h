@class NSDate;

@interface WFPollenConditions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long timeOfDay;
@property (nonatomic) unsigned long long grassIndex;
@property (nonatomic) unsigned long long ragweedIndex;
@property (nonatomic) unsigned long long treeIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
