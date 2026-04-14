@class NSDictionary, NSArray;

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings

@property (copy, nonatomic) NSDictionary *audioSettings;
@property (copy, nonatomic) NSDictionary *cinematicAudioSettings;
@property (copy, nonatomic) NSArray *metadata;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
