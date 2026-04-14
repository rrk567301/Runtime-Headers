@class NSError, NSString, FSModuleExtension;

@interface FSFileSystem : NSObject <FSFileSystemBase>

@property (retain) FSModuleExtension *extension;
@property (retain) NSError *errorState;
@property long long containerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)wipeResource:(id)a0 completionHandler:(id /* block */)a1;
- (void)wipeResource:(id)a0 reply:(id /* block */)a1;

@end
