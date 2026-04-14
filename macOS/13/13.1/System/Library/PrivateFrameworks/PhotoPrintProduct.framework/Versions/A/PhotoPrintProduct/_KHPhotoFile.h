@class KHImageProperties, NSURL, NSDictionary;

@interface _KHPhotoFile : KHPhoto

@property (retain, nonatomic) KHImageProperties *imageProperties;
@property (retain, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSDictionary *fileAttributes;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithFileURL:(id)a0;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)pageLayoutPhotoID;
- (id)pageLayoutFilename;
- (id)pageLayoutTitle;
- (id)pageLayoutPhotoDate;
- (id)pageLayoutPhotoModificationDate;
- (BOOL)pageLayoutImageExists;
- (id)pageLayoutImage;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0 quality:(unsigned long long)a1;

@end
