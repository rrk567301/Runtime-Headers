@interface GESSAlgInverseRenderImageSet : NSObject

@property struct CGImage { } *colorImage;
@property struct CGImage { } *maskImage;
@property struct CGImage { } *mraImage;
@property struct CGImage { } *normalObjectSpaceImage;

- (id)init;

@end
