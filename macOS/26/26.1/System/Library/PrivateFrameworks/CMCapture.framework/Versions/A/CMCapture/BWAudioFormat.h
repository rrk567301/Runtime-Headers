@class NSDictionary;

@interface BWAudioFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_audioFormatDescription;
    NSDictionary *_avAudioSettings;
}

@property (readonly) struct opaqueCMFormatDescription { } *audioFormatDescription;
@property (readonly) NSDictionary *audioCompressionSBPOptions;

+ (BOOL)compressionOptionTrimSampleBufferDurationsIsRequiredForAudioSettings:(id)a0;
+ (id)formatForAVAudioSettings:(id)a0 inputFormat:(id)a1 formatExtensions:(id)a2;
+ (id)formatForAVAudioSettings:(id)a0 inputFormat:(id)a1;
+ (void)initialize;
+ (id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

- (id)description;
- (void)dealloc;
- (unsigned int)mediaType;
- (id)debugDescription;
- (struct opaqueCMFormatDescription { } *)formatDescription;

@end
