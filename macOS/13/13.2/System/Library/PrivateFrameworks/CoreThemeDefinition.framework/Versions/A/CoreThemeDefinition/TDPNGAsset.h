@class NSSet;

@interface TDPNGAsset : TDAsset {
    int _exifOrientation;
    unsigned int _fileScaleFactor;
}

@property (retain, nonatomic) NSSet *renditions;
@property (nonatomic) BOOL rawData;

- (int)exifOrientation;
- (BOOL)hasCursorProduction;
- (BOOL)hasProduction;
- (struct CGSize { double x0; double x1; })sourceImageSizeWithDocument:(id)a0;
- (id)sourceImageWithDocument:(id)a0;
- (void)_logError:(id)a0;
- (void)setFileScaleFactor:(unsigned int)a0;
- (unsigned int)fileScaleFactor;

@end
