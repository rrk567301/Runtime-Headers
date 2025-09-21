@class NSString, NSURL;

@interface MCMContainerSchemaActionStopBackupExclude : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSinglePath> {
    NSURL *_url;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionIdentifier;

@end
