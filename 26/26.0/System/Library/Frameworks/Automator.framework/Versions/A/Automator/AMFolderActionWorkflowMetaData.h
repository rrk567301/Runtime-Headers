@class NSString;

@interface AMFolderActionWorkflowMetaData : AMWorkflowMetaData

@property (copy, nonatomic) NSString *folderActionFolderPath;
@property (copy) NSString *savedFolderActionFolderPath;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)metaData;
- (void).cxx_destruct;
- (void)setFromDictionary:(id)a0;

@end
