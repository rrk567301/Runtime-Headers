@interface NUChannelMetadataMediaFormat : NUChannelMediaFormat

+ (id)genericMetadataFormat;
+ (id)imageMetadataFormat;
+ (id)videoMetadataFormat;

- (long long)mediaType;
- (id)description;
- (BOOL)canSpecializeMediaFormat:(id)a0;
- (BOOL)canSpecializeMetadataMediaFormat:(id)a0;
- (BOOL)isCompatibleWithMediaFormat:(id)a0;
- (BOOL)isCompatibleWithMetadataMediaFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (BOOL)isEqualToMetadataMediaFormat:(id)a0;
- (BOOL)isGeneric;
- (id)specializedWithComponentMediaFormat:(id)a0;
- (id)specializedWithMediaFormat:(id)a0;
- (id)specializedWithMetadataMediaFormat:(id)a0;

@end
