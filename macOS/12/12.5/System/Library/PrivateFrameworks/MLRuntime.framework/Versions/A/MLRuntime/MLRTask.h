@class DESInternalDodMLTask, MLRTaskParameters, MLRTaskAttachments;

@interface MLRTask : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DESInternalDodMLTask *DESTask;
@property (readonly, nonatomic) MLRTaskParameters *parameters;
@property (readonly, copy, nonatomic) MLRTaskAttachments *attachments;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithParametersDict:(id)a0;
- (id)initWithDodMLTask:(id)a0;
- (id)initWithParameters:(id)a0 attachments:(id)a1;

@end
