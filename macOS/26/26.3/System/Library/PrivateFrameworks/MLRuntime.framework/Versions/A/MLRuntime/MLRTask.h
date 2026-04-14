@class MLRTaskAttachments, MLRTaskParameters;

@interface MLRTask : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MLRTaskParameters *parameters;
@property (readonly, copy, nonatomic) MLRTaskAttachments *attachments;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithParametersDict:(id)a0;
- (id)initWithParameters:(id)a0 attachments:(id)a1;

@end
