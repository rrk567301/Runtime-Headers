@class NSUUID, VNPixelBufferObservation, VNRequestSpecifier;

@interface VNFaceGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding> {
    VNRequestSpecifier *_originatingRequestSpecifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *faceObservationUUID;
@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, nonatomic) VNPixelBufferObservation *gazeMask;
@property (readonly, nonatomic) NSUUID *lookedAtFaceObservationUUID;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;

@end
