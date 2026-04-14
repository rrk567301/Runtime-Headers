@interface AVB17221AEMCVFMJPEGStreamForamt : AVB17221AEMCVFStreamFormat

@property (getter=isProgressiveScan) BOOL progressiveScan;
@property unsigned char type;
@property unsigned char width;
@property unsigned char height;

+ (id)keyPathsForValuesAffectingWidth;
+ (id)keyPathsForValuesAffectingProgressiveScan;
+ (id)keyPathsForValuesAffectingType;
+ (id)keyPathsForValuesAffectingHeight;

- (id)init;
- (unsigned int)maximumPDUSize;

@end
