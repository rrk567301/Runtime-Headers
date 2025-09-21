@interface _MUBaseImage : NSObject

@property (readonly, nonatomic) struct CGImageSource { } *imageSourceRef;
@property (readonly, nonatomic) struct CGImageMetadata { } *imageMetadata;
@property (readonly, nonatomic) struct __CFDictionary { } *imageOptions;
@property (readonly, nonatomic) struct CGImage { } *sdrImage;
@property (readonly, nonatomic) struct CGImage { } *hdrImage;
@property (readonly, nonatomic) double headroom;

- (void)dealloc;
- (id)initWithBaseImage:(id)a0 allowHDR:(BOOL)a1;

@end
