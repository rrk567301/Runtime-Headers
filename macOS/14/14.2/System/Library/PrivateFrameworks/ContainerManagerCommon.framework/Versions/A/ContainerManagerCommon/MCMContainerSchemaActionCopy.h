@class NSURL;

@interface MCMContainerSchemaActionCopy : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL *_sourceURL;
    NSURL *_destURL;
}

+ (id)actionIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSourcePathArgument:(id)a0 destinationPathArgument:(id)a1 context:(id)a2;
- (BOOL)performWithError:(id *)a0;

@end
