@class NSURL, SCNMTLLibraryManager;
@protocol MTLLibrary;

@interface SCNMTLLibrary : NSObject {
    NSURL *_libraryURL;
    SCNMTLLibraryManager *_manager;
}

@property (readonly, nonatomic) id<MTLLibrary> library;

- (void)_load;
- (void)dealloc;
- (id)initWithPath:(id)a0 manager:(id)a1;

@end
