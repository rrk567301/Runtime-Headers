@class VNRequestSpecifier;

@interface VNFaceScreenGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding> {
    VNRequestSpecifier *_originatingRequestSpecifier;
    struct CGPoint { double x; double y; } _screenGaze;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) float lookingAtDevice;
@property (readonly) float notLookingAtDevice;
@property (readonly) float difficultToSay;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })screenGazeRawOutputInCentimeters;

@end
