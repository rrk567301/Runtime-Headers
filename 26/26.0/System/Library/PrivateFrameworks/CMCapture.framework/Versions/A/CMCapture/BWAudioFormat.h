@class NSDictionary;

@interface BWAudioFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_audioFormatDescription;
    NSDictionary *_avAudioSettings;
}

@property (readonly) struct opaqueCMFormatDescription { } *audioFormatDescription;
@property (readonly) NSDictionary *audioCompressionSBPOptions;

+ (id)formatForAVAudioSettings:(id)a0 inputFormat:(id)a1 formatExtensions:(id)a2;
+ (void)initialize;
+ (id)formatForAVAudioSettings:(id)a0 inputFormat:(id)a1;
+ (BOOL)compressionOptionTrimSampleBufferDurationsIsRequiredForAudioSettings:(id)a0;
+ (id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

- (id)debugDescription;
- (void)dealloc;
- (struct opaqueCMFormatDescription { } *)formatDescription;
- (unsigned int)mediaType;
- (id)description;

@end
