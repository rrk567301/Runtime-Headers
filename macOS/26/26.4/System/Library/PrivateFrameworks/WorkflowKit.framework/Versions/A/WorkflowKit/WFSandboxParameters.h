@class NSString;

@interface WFSandboxParameters : NSObject

@property (readonly, copy, nonatomic) NSString *home;
@property (readonly, copy, nonatomic) NSString *tempdir;
@property (readonly, copy, nonatomic) NSString *cachedir;
@property (readonly, copy, nonatomic) NSString *secmsgfile;
@property (readonly, copy, nonatomic) NSString *userPicturesDirectoryPathString;
@property (readonly, copy, nonatomic) NSString *shortcutiCloudDirectoryPathString;
@property (readonly, copy, nonatomic) NSString *wallpaperDirectoryNameString;
@property (readonly, nonatomic) struct { char **x0; unsigned long long x1; unsigned long long x2; } *parameters;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)compileWithName:(id)a0 error:(id *)a1;
- (id)hashWithProfileName:(id)a0;

@end
