@class NSString, ML3MusicLibraryResourcesManagerContext, _ML3BaseMusicLibraryResourcesManager;

@interface ML3MusicLibraryResourcesManager : NSObject <NSSecureCoding, ML3MusicLibraryResourcesProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) ML3MusicLibraryResourcesManager *sharedManager;
@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _ML3BaseMusicLibraryResourcesManager *implementation;
@property (retain, nonatomic) ML3MusicLibraryResourcesManagerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(id)a0;
- (id)initWithBaseResourcesManager:(id)a0;
- (id)libraryContainerPath;
- (id)libraryContainerPathByAppendingPathComponent:(id)a0;
- (id)libraryContainerRelativePath:(id)a0;
- (id)mediaFolderRelativePath:(id)a0;
- (id)musicAssetsContainerPath;
- (id)pathForBaseLocationPath:(long long)a0;
- (id)pathForResourceFileOrFolder:(int)a0;
- (id)pathForResourceFileOrFolder:(int)a0 basePath:(id)a1 relativeToBase:(char)a2 createParentFolderIfNecessary:(char)a3;

@end
