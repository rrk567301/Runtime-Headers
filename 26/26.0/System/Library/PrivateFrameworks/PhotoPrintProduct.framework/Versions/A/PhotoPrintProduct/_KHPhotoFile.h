@class KHImageProperties, NSURL, NSDictionary;

@interface _KHPhotoFile : KHPhoto

@property (retain, nonatomic) KHImageProperties *imageProperties;
@property (retain, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSDictionary *fileAttributes;

- (id)URL;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)pageLayoutPhotoModificationDate;
- (id)pageLayoutImage;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (id)pageLayoutTitle;
- (id)pageLayoutFilename;
- (BOOL)pageLayoutImageExists;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0 quality:(unsigned long long)a1;
- (id)pageLayoutPhotoDate;
- (id)pageLayoutPhotoID;

@end
