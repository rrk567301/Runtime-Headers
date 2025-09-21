@interface _ANSTISPInferenceConfigurationV1 : ANSTISPInferenceConfiguration {
    char _objectTrackingEnabled;
    char _segmentationEnabled;
    long long _resolution;
    long long _frameRate;
}

+ (char)supportsSecureCoding;
+ (unsigned long long)_version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)frameRate;
- (long long)resolution;
- (void)setFrameRate:(long long)a0;
- (void)setResolution:(long long)a0;
- (id)initForVersion:(unsigned long long)a0 withError:(id *)a1;
- (char)isObjectTrackingEnabled;
- (char)isSegmentationEnabled;
- (void)setObjectTrackingEnabled:(char)a0;
- (void)setSegmentationEnabled:(char)a0;

@end
