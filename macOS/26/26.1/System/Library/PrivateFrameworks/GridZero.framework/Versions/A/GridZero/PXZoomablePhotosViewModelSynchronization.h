@interface PXZoomablePhotosViewModelSynchronization : NSObject

+ (void)updatePhotosViewModel:(id)a0 fromZoomablePhotosViewModel:(id)a1 changeDescriptor:(unsigned long long)a2;
+ (void)updateZoomablePhotosViewModel:(id)a0 fromPhotosViewModel:(id)a1 changeDescriptor:(unsigned long long)a2 overrideZoomColumn:(id)a3;
+ (void)updateZoomablePhotosViewModel:(id)a0 fromPhotosViewModel:(id)a1 changeDescriptor:(unsigned long long)a2;

@end
