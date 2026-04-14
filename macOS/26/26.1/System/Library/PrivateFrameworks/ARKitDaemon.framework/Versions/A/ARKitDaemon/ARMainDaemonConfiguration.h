@class NSDictionary, NSString;

@interface ARMainDaemonConfiguration : NSObject <ARDaemonConfiguration>

@property (readonly, nonatomic) Class controlClass;
@property (readonly, nonatomic) BOOL hasLibraryDirectoryReadWriteAccess;
@property (readonly, nonatomic) BOOL isInProcess;
@property (readonly, nonatomic) BOOL supportsWatchdog;
@property (readonly, nonatomic) NSDictionary *deviceIDToLoopbackPort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
