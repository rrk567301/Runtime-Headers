@class NSNumber, NSDate;

@interface RTAuthorizedLocationZDRLocationsEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSNumber *maximumNumberOfItems;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithOptions:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 maximumNumberOfItems:(id)a3;

@end
