@class NSString;

@interface AMPWritingDirectionsCounts : NSObject

@property (class, nonatomic, readonly) AMPWritingDirectionsCounts *zero;

@property (nonatomic, readonly) unsigned long long natural;
@property (nonatomic, readonly) unsigned long long leftToRight;
@property (nonatomic, readonly) unsigned long long rightToLeft;
@property (nonatomic, readonly) unsigned long long total;
@property (nonatomic, readonly) unsigned long long significantValues;
@property (nonatomic, readonly) BOOL hasStronglyTypedCounts;
@property (nonatomic, readonly) BOOL isRTLEnough;
@property (nonatomic, readonly) BOOL isRTLMinimal;
@property (nonatomic, readonly) NSString *description;

+ (id)add:(id)a0 to:(id)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNatural:(unsigned long long)a0 leftToRight:(unsigned long long)a1 rightToLeft:(unsigned long long)a2;

@end
