@class NSURL;

@interface MCMContainerSchemaActionMkdir : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSinglePath> {
    NSURL *_url;
}

+ (id)actionIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPathArgument:(id)a0 context:(id)a1;
- (char)performWithError:(id *)a0;

@end
