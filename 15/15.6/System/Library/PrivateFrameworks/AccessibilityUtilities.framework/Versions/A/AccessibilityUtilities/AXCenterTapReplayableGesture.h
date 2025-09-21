@interface AXCenterTapReplayableGesture : AXReplayableGesture

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
