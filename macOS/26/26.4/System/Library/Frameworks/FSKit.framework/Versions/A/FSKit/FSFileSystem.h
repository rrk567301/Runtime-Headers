@class NSString, FSContainerStatus, FSModuleExtension;

@interface FSFileSystem : NSObject <FSFileSystemBase>

@property (retain) FSModuleExtension *extension;
@property (copy) FSContainerStatus *containerStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)wipeResource:(id)a0 completionHandler:(id /* block */)a1;

@end
