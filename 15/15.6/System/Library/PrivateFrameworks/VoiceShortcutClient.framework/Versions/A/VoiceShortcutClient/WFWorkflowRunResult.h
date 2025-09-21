@class NSError;

@interface WFWorkflowRunResult : NSObject <NSSecureCoding> {
    NSError *_internalError;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isCancelled) char cancelled;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)resultBySettingError:(id)a0;

@end
