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
+ (id)formatForAVAudioSettings:(id)a0 inputFormat:(id)a1 formatExtensions:(id)a2;
+ (id)formatForAVAudioSettings:(id)a0 inputFormat:(id)a1;

- (id)debugDescription;
- (id)description;
- (unsigned int)mediaType;
- (void)dealloc;
- (struct opaqueCMFormatDescription { } *)formatDescription;

@end
