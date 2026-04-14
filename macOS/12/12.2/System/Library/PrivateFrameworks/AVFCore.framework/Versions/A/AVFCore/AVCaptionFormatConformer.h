@interface AVCaptionFormatConformer : NSObject {
    void *_conformerInternal;
}

@property (nonatomic) BOOL conformsCaptionsToTimeRange;

+ (id)captionFormatConformerWithConversionSettings:(id)a0;

- (void)dealloc;
- (BOOL)_isConversionToClosedCaptions:(id)a0;
- (id)initWithConversionSettings:(id)a0;
- (BOOL)conformsCaptionTimeRange;
- (void)setConformsCaptionTimeRange:(BOOL)a0;
- (id)conformedCaptionForCaption:(id)a0 error:(id *)a1;

@end
