@class PHPhotoLibrary, _PASCachedResult;

@interface _PSPhotoLibraryAssertion : NSObject {
    _PASCachedResult *_lazyLibrary;
}

@property (readonly, nonatomic) PHPhotoLibrary *library;

- (id)_init;
- (void).cxx_destruct;
- (void)dealloc;

@end
