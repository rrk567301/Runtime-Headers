@class NSString, NSSet;

@interface AppSandboxFolderRedirector : NSObject {
    NSString *_homedir;
    NSSet *_redirectedPaths;
}

+ (id)folderRedirectorForUserWithHomeDirectory:(id)a0 error:(id *)a1;
+ (id)expandPathForFolder:(id)a0 withUserHomeDirectory:(id)a1;
+ (id)folderRedirectorForUID:(unsigned int)a0 error:(id *)a1;
+ (id)redirectedFolders;

- (void).cxx_destruct;
- (id)resolvedRedirectedFolders;
- (id)redirectedFolderPaths;
- (id)initForUserWithHomeDirectory:(id)a0 error:(id *)a1;
- (BOOL)isRedirectionEnabledForPath:(id)a0;

@end
