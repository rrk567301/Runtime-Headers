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
- (void)wipeResource:(id)a0 includingRanges:(id)a1 excludingRanges:(id)a2 completionHandler:(id /* block */)a3;
- (void)wipeResource:(id)a0 includingRanges:(id)a1 excludingRanges:(id)a2 reply:(id /* block */)a3;

@end
