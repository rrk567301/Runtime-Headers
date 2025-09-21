@class NSURL;

@interface MCMContainerSchemaActionMoveContents : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL *_sourceURL;
    NSURL *_destURL;
}

+ (id)actionIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSourcePathArgument:(id)a0 destinationPathArgument:(id)a1 destFinalPathArgument:(id)a2 context:(id)a3;
- (char)performWithError:(id *)a0;

@end
