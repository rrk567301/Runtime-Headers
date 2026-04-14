@class OITSUCustomFormatData;

@interface OITSUCustomFormatCondition : NSObject <NSCopying>

@property (readonly, nonatomic) int conditionType;
@property (readonly, nonatomic) double conditionValue;
@property (readonly, nonatomic) OITSUCustomFormatData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(int)a0 value:(double)a1 data:(id)a2;

@end
