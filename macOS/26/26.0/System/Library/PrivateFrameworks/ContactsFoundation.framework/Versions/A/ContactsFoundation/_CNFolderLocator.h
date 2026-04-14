@class NSURL;

@interface _CNFolderLocator : NSObject

@property (readonly) NSURL *addressBookFolder;
@property (readonly) NSURL *libraryFolder;
@property (readonly) NSURL *cachesFolder;

- (id)fallbackLibraryFolder;
- (id)sharedUserLibraryFolder;
- (id)userLibraryFolder;

@end
