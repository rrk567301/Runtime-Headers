@class NSString, TRIFactorsState, NSDate;

@interface TRIEvaluationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSString *evaluationId;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) TRIFactorsState *evalState;

+ (id)defaultProvider;
+ (id)freshProvider;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned char)a0 evaluationId:(id)a1 date:(id)a2 evalState:(id)a3;

@end
