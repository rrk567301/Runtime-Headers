@class HMICamera, NSUUID, NSString;

@interface HMIVideoAnalyzerConfiguration : HMFObject <HMFLogging, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long decodeMode;
@property char redactFrames;
@property long long packageClassifierMode;
@property char allowReducedConfiguration;
@property char enableTemporalEventFiltering;
@property char saveAnalyzerResultsToDisk;
@property double analysisFPS;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } thumbnailInterval;
@property unsigned long long thumbnailHeight;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } timelapseInterval;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } timelapsePreferredFragmentDuration;
@property unsigned int timelapseCodecType;
@property double maxFragmentAnalysisDuration;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } maxFragmentDuration;
@property char transcode;
@property unsigned int transcodeCodecType;
@property (retain) HMICamera *camera;
@property double minFrameQuality;
@property double minFrameScale;
@property (retain) NSUUID *homeUUID;
@property char passthroughAudio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (void)setTimelapseVideo:(char)a0;
- (void)setTimelapseVideoPreferredFragmentDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (char)timelapseVideo;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timelapseVideoPreferredFragmentDuration;

@end
