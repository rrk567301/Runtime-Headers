@class FSModuleExtension;

@interface FSFileSystemBasis : NSObject

@property (retain) FSModuleExtension *extension;

+ (void)wipeResource:(id)a0 includingRanges:(id)a1 excludingRanges:(id)a2 extension:(id)a3 completionHandler:(id /* block */)a4;

- (void).cxx_destruct;

@end
