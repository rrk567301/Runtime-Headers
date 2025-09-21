@class NSString;

@interface BlastDoorAttributionInfo_PreviewGenerationConstraints : NSObject {
    void /* unknown type, empty encoding */ attributionInfo_PreviewGenerationConstraints;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) char has_maxPixelWidth;
@property (nonatomic, readonly) double maxPixelWidth;
@property (nonatomic, readonly) char has_minThumbSizeHeight;
@property (nonatomic, readonly) double minThumbSizeHeight;
@property (nonatomic, readonly) char has_minThumbSizeWidth;
@property (nonatomic, readonly) double minThumbSizeWidth;
@property (nonatomic, readonly) char has_scale;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) char isSticker;

- (id)init;

@end
