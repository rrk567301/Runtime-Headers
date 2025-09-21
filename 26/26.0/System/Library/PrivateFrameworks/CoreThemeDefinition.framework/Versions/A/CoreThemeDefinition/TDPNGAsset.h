@class NSSet, NSNumber;

@interface TDPNGAsset : TDAsset {
    int _exifOrientation;
    unsigned int _fileScaleFactor;
}

@property (retain, nonatomic) NSSet *renditions;
@property (nonatomic) BOOL rawData;
@property (copy, nonatomic) NSNumber *scaledWidth;
@property (copy, nonatomic) NSNumber *scaledHeight;

- (int)exifOrientation;
- (unsigned int)fileScaleFactor;
- (void)_logError:(id)a0;
- (BOOL)hasCursorProduction;
- (BOOL)hasProduction;
- (void)setFileScaleFactor:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })sourceImageSizeWithDocument:(id)a0;
- (id)sourceImageWithDocument:(id)a0;

@end
