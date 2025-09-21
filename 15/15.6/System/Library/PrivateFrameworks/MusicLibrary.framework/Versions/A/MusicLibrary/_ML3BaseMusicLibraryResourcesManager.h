@class NSString;

@interface _ML3BaseMusicLibraryResourcesManager : NSObject <ML3MusicLibraryResourcesProviding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *libraryContainerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_controlDirectoryPathWithBasePath:(id)a0;
- (id)_libraryContainerPathForDSID:(id)a0;
- (id)_mediaPath;
- (id)_mediaRelativeMusicAssetsDirectoryPath;
- (char)_mediaResourceRequiresLibraryContainerAccess:(int)a0;
- (id)_musicAssetsPathRelativeToBasePath:(id)a0;
- (id)_pathForResourceFileOrFolder:(int)a0 basePath:(id)a1 relativeToBase:(char)a2 isFolder:(char *)a3;
- (id)initWithAccountInfo:(id)a0;
- (id)initWithLibraryContainerIdentifier:(id)a0;
- (id)libraryContainerPath;
- (id)libraryContainerPathByAppendingPathComponent:(id)a0;
- (id)libraryContainerRelativePath:(id)a0;
- (id)mediaFolderRelativePath:(id)a0;
- (id)musicAssetsContainerPath;
- (id)pathForBaseLocationPath:(long long)a0;
- (id)pathForResourceFileOrFolder:(int)a0;
- (id)pathForResourceFileOrFolder:(int)a0 basePath:(id)a1 relativeToBase:(char)a2 createParentFolderIfNecessary:(char)a3;

@end
