@class NSError;

@interface AMWorkflowCompletionResults : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) id output;
@property (retain) NSError *error;
@property char workflowCouldNotStart;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOutput:(id)a0 error:(id)a1;

@end
