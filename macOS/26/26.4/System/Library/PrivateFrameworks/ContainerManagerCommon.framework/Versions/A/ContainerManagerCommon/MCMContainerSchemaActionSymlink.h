@class NSString, NSURL;

@interface MCMContainerSchemaActionSymlink : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL *_linkURL;
    NSURL *_finalLinkURL;
    NSString *_targetPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionIdentifier;

@end
