@class NSObject;
@protocol OS_os_log;

@interface DEDAttachmentHandler : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property char compressOnAttach;

- (id)init;
- (void).cxx_destruct;
- (id)_createEmptyMessageFileForDE:(id)a0 extensionName:(id)a1 withSessionIdentifier:(id)a2 device:(id)a3 withRootDir:(id)a4;
- (id)_processAttachments:(id)a0 withSessionIdentifier:(id)a1 extension:(id)a2 rootDir:(id)a3;
- (id)_processAttachments:(id)a0 withSessionIdentifier:(id)a1 extension:(id)a2 shouldAddClassBDataProtection:(char)a3 rootDir:(id)a4;
- (id)_processAttachments:(id)a0 withSessionIdentifier:(id)a1 extension:(id)a2 shouldAddClassBDataProtection:(char)a3 rootDir:(id)a4 annotatedGroup:(id)a5;
- (id)collectedGroupsWithSessionIdentifier:(id)a0 matchingExtensions:(id)a1;
- (id)createEmptyMessageFileForDE:(id)a0 extensionName:(id)a1 withSessionIdentifier:(id)a2 device:(id)a3;
- (id)dedDirectory;
- (id)directoryForBugSessionIdentifier:(id)a0;
- (id)directoryForBugSessionIdentifier:(id)a0 createIfNeeded:(char)a1;
- (id)directoryForBugSessionWithIdentifier:(id)a0 extension:(id)a1 rootDirectory:(id)a2;
- (id)directoryForBugSessionWithIdentifier:(id)a0 extension:(id)a1 rootDirectory:(id)a2 createIfNeeded:(char)a3;
- (id)directoryForBugSessionWithIdentifier:(id)a0 rootDirectory:(id)a1 createIfNeeded:(char)a2;
- (unsigned long long)directorySizeForBugSessionIdentifier:(id)a0;
- (id)extensionsWithFilesAttachedToSessionWithID:(id)a0 allExtensions:(id)a1;
- (id)identifierForAdoptingFile:(id)a0;
- (id)processAttachments:(id)a0 withSessionIdentifier:(id)a1 extension:(id)a2 shouldAddClassBDataProtection:(char)a3 annotatedGroup:(id)a4;
- (void)removeDEFiles:(id)a0 withSessionIdentifier:(id)a1;
- (void)removeDirectoryForBugSessionIdentifier:(id)a0;

@end
