@class NSMutableDictionary;

@interface PXGCornerMaskPathLibrary : NSObject {
    NSMutableDictionary *_cache;
}

@property (class, readonly, nonatomic) PXGCornerMaskPathLibrary *sharedLibrary;

- (id)init;
- (void).cxx_destruct;
- (id)pathForCornerRadius:(double)a0 continuousCorners:(char)a1 screenScale:(double)a2 maskColor:(id)a3;

@end
