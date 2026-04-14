@class VNRequestSpecifier;

@interface VNFaceScreenGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding> {
    struct CGPoint { double x; double y; } _screenGaze;
    VNRequestSpecifier *_originatingRequestSpecifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })screenGazeRawOutputInCentimeters;

@end
