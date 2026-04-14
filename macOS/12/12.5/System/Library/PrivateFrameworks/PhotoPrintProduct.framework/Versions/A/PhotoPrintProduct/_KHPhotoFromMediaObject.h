@class KHImageProperties, MLMediaObject, KHImage;

@interface _KHPhotoFromMediaObject : KHPhoto {
    KHImage *_image;
}

@property (retain, nonatomic) MLMediaObject *mediaObject;
@property (retain, nonatomic) KHImageProperties *imageProperties;

- (void).cxx_destruct;
- (id)fileURL;
- (id)URL;
- (unsigned long long)imageOrientation;
- (id)initWithMediaObject:(id)a0;
- (id)pageLayoutPhotoID;
- (id)pageLayoutAspectRatioThumbnailImage;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0 quality:(unsigned long long)a1;
- (id)pageLayoutTitle;
- (id)pageLayoutPhotoDate;
- (id)pageLayoutPhotoModificationDate;
- (id)pageLayoutImage;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_storedPageLayoutImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_scaledPageLayoutImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_urlForSize:(unsigned long long)a0;

@end
