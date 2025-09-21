@class NSString;

@interface BMDSLBaseCodable : NSObject <NSSecureCoding>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isEvaluationBlocked) char evaluationBlocked;
@property (readonly, nonatomic) char allowsEvaluation;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int version;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void)allowEvaluation;
- (id)initWithName:(id)a0 version:(unsigned int)a1;

@end
