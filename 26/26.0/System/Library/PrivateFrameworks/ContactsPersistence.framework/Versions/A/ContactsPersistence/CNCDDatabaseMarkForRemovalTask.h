@class CNCDDatabaseRemovalRequest, NSString, CNResult, NSURL;

@interface CNCDDatabaseMarkForRemovalTask : CNTask

@property (readonly, copy, nonatomic) CNCDDatabaseRemovalRequest *request;
@property (readonly, copy, nonatomic) NSString *bootSessionUUID;
@property (readonly, copy, nonatomic) NSURL *folderURL;
@property (readonly, nonatomic) CNResult *result;

+ (id)markForRemovalTaskWithRequest:(id)a0;

- (id)initWithRequest:(id)a0;
- (id)run;
- (id)description;
- (void).cxx_destruct;
- (void)findAccountFolder;
- (void)markFolderForRemoval;
- (void)prepareBootSessionUUID;

@end
