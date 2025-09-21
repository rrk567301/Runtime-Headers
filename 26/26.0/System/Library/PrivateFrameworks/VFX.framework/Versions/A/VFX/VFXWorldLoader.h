@class NSUUID, NSError, NSString;

@interface VFXWorldLoader : NSObject <NSKeyedUnarchiverDelegate> {
    NSUUID *_documentUUID;
}

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSUUID *documentUUID;
@property (readonly, nonatomic, getter=isPrecompiled) BOOL precompiled;
@property (readonly, nonatomic) NSError *warnings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loader;
+ (void)transferWorld:(id)a0 to:(id)a1;

- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (void)dealloc;
- (id)init;
- (id)_loadURL:(id)a0 options:(id)a1 statusHandler:(id /* block */)a2 error:(id *)a3;
- (id)loadNonNativeFormatAt:(id)a0 options:(id)a1 statusHandler:(id /* block */)a2 error:(id *)a3;
- (id)loadWorldDescriptionAt:(id)a0 options:(id)a1 compressed:(BOOL)a2 statusHandler:(id /* block */)a3 error:(id *)a4;
- (id)loadWorldDescriptionFromData:(id)a0 options:(id)a1 compressed:(BOOL)a2 sourceURL:(id)a3 statusHandler:(id /* block */)a4 error:(id *)a5;
- (id)loadWorldFromData:(id)a0 options:(id)a1 statusHandler:(id /* block */)a2 error:(id *)a3;
- (id)loadWorldFromURL:(id)a0 options:(id)a1 statusHandler:(id /* block */)a2 error:(id *)a3;

@end
