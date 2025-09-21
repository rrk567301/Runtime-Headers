@class NSDictionary;

@interface SUCorePolicyRollback : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL performPhase;
@property (nonatomic) BOOL performRollbackPreparePhase;
@property (nonatomic) BOOL performRollbackSuspendPhase;
@property (nonatomic) BOOL performRollbackResumePhase;
@property (nonatomic) BOOL performRollbackApplyPhase;
@property (nonatomic) BOOL skipCancelPreviousUpdate;
@property (retain, nonatomic) NSDictionary *additionalOptions;
@property (retain, nonatomic) NSDictionary *baseRollbackOptions;

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
