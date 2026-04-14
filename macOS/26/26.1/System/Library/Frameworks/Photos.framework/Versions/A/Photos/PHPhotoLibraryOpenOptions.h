@class NSURL;

@interface PHPhotoLibraryOpenOptions : NSObject

@property (copy) NSURL *libraryURL;
@property unsigned long long internalUpgradeOptions;
@property unsigned long long internalCreateOptions;
@property BOOL allowsUpgrade;

- (void).cxx_destruct;
- (id)debugDescription;

@end
