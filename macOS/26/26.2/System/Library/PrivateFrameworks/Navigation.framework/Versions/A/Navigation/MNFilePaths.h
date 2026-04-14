@class NSDictionary, NSString;

@interface MNFilePaths : NSObject

@property (class, readonly, nonatomic) NSDictionary *fileAttributes;
@property (class, readonly, nonatomic) NSString *navdCacheDirectoryPath;
@property (class, readonly, nonatomic) NSString *navTracesDirectoryPath;
@property (class, readonly, nonatomic) NSString *routePlanningTracesDirectoryPath;
@property (class, readonly, nonatomic) NSString *routeCreationTracesDirectoryPath;
@property (class, readonly, nonatomic) NSString *commuteTracesDirectoryPath;
@property (class, readonly, nonatomic) NSString *navTempDirectoryPath;
@property (class, readonly, nonatomic) NSString *navTraceExtension;
@property (class, readonly, nonatomic) NSString *routePlanningTraceExtension;
@property (class, readonly, nonatomic) NSString *customRouteCreationTraceExtension;
@property (class, readonly, nonatomic) NSString *commuteTraceExtension;
@property (class, readonly, nonatomic) NSString *routeHandleExtension;

+ (BOOL)createFolderIfNotPresent:(id)a0 error:(id *)a1;
+ (id)_homeDirectoryPath;
+ (id)_validFilenameForTraceName:(id)a0;
+ (id)tracePathForTraceName:(id)a0 extension:(id)a1 directoryPath:(id)a2;
+ (id)_cachesDirectoryPath;

@end
