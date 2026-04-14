@class NSString, NSNumber;

@interface WiFiUsageLQMFeature : NSObject

@property (retain, nonatomic) NSString *fieldName;
@property (nonatomic) BOOL isPerSecond;
@property (retain, nonatomic) NSNumber *median;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithField:(id)a0 andPerSecond:(BOOL)a1;

@end
