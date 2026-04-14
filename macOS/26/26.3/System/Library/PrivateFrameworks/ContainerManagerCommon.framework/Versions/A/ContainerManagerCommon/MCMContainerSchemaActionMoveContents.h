@class NSString, NSURL;

@interface MCMContainerSchemaActionMoveContents : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL *_sourceURL;
    NSURL *_destURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionIdentifier;

@end
