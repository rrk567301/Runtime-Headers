@class NSError;

@interface WFWorkflowRunResult : NSObject <NSSecureCoding> {
    NSError *_internalError;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)resultBySettingError:(id)a0;

@end
