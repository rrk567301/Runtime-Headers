@class NSURL, VFXMTLLibraryManager, NSDate;
@protocol MTLLibrary;

@interface VFXMTLLibrary : NSObject {
    NSURL *_libraryURL;
    VFXMTLLibraryManager *_manager;
    NSDate *_lastModificationDate;
}

@property (readonly, nonatomic) id<MTLLibrary> library;

- (void)dealloc;
- (void)_load;
- (id)initWithPath:(id)a0 manager:(id)a1;

@end
