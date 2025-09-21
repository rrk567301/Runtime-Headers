@interface PXPeoplePetsHomeVisibilitySource : NSObject <PXPhotoLibraryUIChangeObserver> {
    void /* unknown type, empty encoding */ humans;
    void /* unknown type, empty encoding */ pets;
    void /* unknown type, empty encoding */ defaults;
}

@property (nonatomic) unsigned long long visibility;

- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;

@end
