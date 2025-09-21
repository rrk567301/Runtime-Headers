@class NSUUID, NSError, NSString;

@interface VFXWorldLoader : NSObject <NSKeyedUnarchiverDelegate>

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSUUID *documentUUID;
@property (readonly, nonatomic, getter=isPrecompiled) char precompiled;
@property (readonly, nonatomic) NSError *warnings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loader;
+ (void)transferWorld:(id)a0 to:(id)a1;

- (id)init;
- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (char)_loadURL:(id)a0 into:(id)a1 options:(id)a2 statusHandler:(id /* block */)a3 error:(id *)a4;
- (char)loadData:(id)a0 into:(id)a1 options:(id)a2 statusHandler:(id /* block */)a3 error:(id *)a4;
- (char)loadNonNativeFormatAt:(id)a0 into:(id)a1 options:(id)a2 statusHandler:(id /* block */)a3 error:(id *)a4;
- (char)loadURL:(id)a0 into:(id)a1 options:(id)a2 statusHandler:(id /* block */)a3 error:(id *)a4;
- (char)loadWorldDescriptionAt:(id)a0 into:(id)a1 options:(id)a2 compressed:(char)a3 statusHandler:(id /* block */)a4 error:(id *)a5;
- (char)loadWorldDescriptionFromData:(id)a0 into:(id)a1 options:(id)a2 compressed:(char)a3 sourceURL:(id)a4 statusHandler:(id /* block */)a5 error:(id *)a6;

@end
