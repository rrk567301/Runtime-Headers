@class NSString;

@interface TDCustomAsset : TDPNGAsset

@property (retain, nonatomic) NSString *referenceData;

- (id)sourceImageWithDocument:(id)a0;
- (struct CGSize { double x0; double x1; })sourceImageSizeWithDocument:(id)a0;

@end
