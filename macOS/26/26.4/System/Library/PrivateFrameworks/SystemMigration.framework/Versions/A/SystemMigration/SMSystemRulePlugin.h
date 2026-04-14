@class NSObject, SMMigrationRequest;
@protocol SMSystem_FileManagerProtocol;

@interface SMSystemRulePlugin : NSObject

@property (weak) SMMigrationRequest *migrationRequest;
@property (weak) NSObject<SMSystem_FileManagerProtocol> *sourceFilesystem;
@property (weak) NSObject<SMSystem_FileManagerProtocol> *targetFilesystem;
@property (nonatomic, getter=cancelled) BOOL cancelled;

- (void)run;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (double)estimateTime;
- (long long)getDataSize;

@end
