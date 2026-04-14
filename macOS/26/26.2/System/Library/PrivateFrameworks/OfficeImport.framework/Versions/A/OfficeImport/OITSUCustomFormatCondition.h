@class OITSUCustomFormatData;

@interface OITSUCustomFormatCondition : NSObject <NSCopying>

@property (readonly, nonatomic) int conditionType;
@property (readonly, nonatomic) double conditionValue;
@property (readonly, nonatomic) OITSUCustomFormatData *data;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(int)a0 value:(double)a1 data:(id)a2;

@end
