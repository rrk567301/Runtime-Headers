@class NSDictionary;

@interface BWAudioFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_audioFormatDescription;
    NSDictionary *_avAudioSettings;
}

@property (readonly) struct opaqueCMFormatDescription { } *audioFormatDescription;
@property (readonly) NSDictionary *audioCompressionSBPOptions;

+ (void)initialize;
+ (BOOL)compressionOptionTrimSampleBufferDurationsIsRequiredForAudioSettings:(id)a0;
+ (id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
+ (id)formatForAVAudioSettings:(id)a0 inputFormat:(id)a1;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (unsigned int)mediaType;
- (struct opaqueCMFormatDescription { } *)formatDescription;

@end
