@class NSURL, VFXMTLLibraryManager, NSDate;
@protocol MTLLibrary;

@interface VFXMTLLibrary : NSObject {
    NSURL *_libraryURL;
    VFXMTLLibraryManager *_manager;
    NSDate *_lastModificationDate;
}

@property (readonly, nonatomic) id<MTLLibrary> library;

- (void)_load;
- (void)dealloc;
- (id)initWithPath:(id)a0 manager:(id)a1;

@end
