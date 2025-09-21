@interface HMCameraClipVideoDataSegment : HMCameraClipVideoSegment

@property (readonly) double duration;
@property (readonly) double timeOffset;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)initWithByteLength:(unsigned long long)a0 byteOffset:(unsigned long long)a1 duration:(double)a2 timeOffset:(double)a3;

@end
