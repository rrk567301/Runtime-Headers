@interface AVCaptionFormatConformer : NSObject {
    void *_conformerInternal;
}

@property (nonatomic) char conformsCaptionsToTimeRange;

+ (id)captionFormatConformerWithConversionSettings:(id)a0;

- (void)dealloc;
- (char)_isConversionToClosedCaptions:(id)a0;
- (id)conformedCaptionForCaption:(id)a0 error:(id *)a1;
- (char)conformsCaptionTimeRange;
- (id)initWithConversionSettings:(id)a0;
- (void)setConformsCaptionTimeRange:(char)a0;

@end
