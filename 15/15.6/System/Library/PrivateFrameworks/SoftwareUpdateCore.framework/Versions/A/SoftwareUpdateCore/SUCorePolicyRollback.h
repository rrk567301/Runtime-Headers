@class NSDictionary;

@interface SUCorePolicyRollback : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char performPhase;
@property (nonatomic) char performRollbackPreparePhase;
@property (nonatomic) char performRollbackSuspendPhase;
@property (nonatomic) char performRollbackResumePhase;
@property (nonatomic) char performRollbackApplyPhase;
@property (nonatomic) char skipCancelPreviousUpdate;
@property (retain, nonatomic) NSDictionary *additionalOptions;
@property (retain, nonatomic) NSDictionary *baseRollbackOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;

@end
