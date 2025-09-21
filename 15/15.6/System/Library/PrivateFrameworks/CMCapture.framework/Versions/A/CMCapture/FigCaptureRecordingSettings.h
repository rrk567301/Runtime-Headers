@class NSURL, NSString;

@interface FigCaptureRecordingSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long settingsID;
@property (copy, nonatomic) NSURL *outputURL;
@property (copy, nonatomic) NSString *outputFileType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxDuration;
@property (nonatomic) long long maxFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
