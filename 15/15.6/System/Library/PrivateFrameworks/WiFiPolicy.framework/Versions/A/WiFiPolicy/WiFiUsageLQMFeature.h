@class NSString, NSNumber;

@interface WiFiUsageLQMFeature : NSObject

@property (retain, nonatomic) NSString *fieldName;
@property (nonatomic) char isPerSecond;
@property (retain, nonatomic) NSNumber *median;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithField:(id)a0 andPerSecond:(char)a1;

@end
