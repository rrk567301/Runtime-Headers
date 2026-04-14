@class NSDate;

@interface RTMotionActivity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) NSDate *startDate;

+ (id)motionActivityConfidenceToString:(unsigned long long)a0;
+ (id)motionActivityTypeToString:(unsigned long long)a0;
+ (unsigned long long)motionActivityConfidenceFromString:(id)a0;
+ (unsigned long long)motionActivityTypeFromString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 confidence:(unsigned long long)a1 startDate:(id)a2;

@end
