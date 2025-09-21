@interface VCPositionalInfo : NSObject <NSSecureCoding> {
    struct CGSize { double width; double height; } _size;
    double _x;
    double _y;
    double _z;
    struct tagVCSpatialAudioMetadataPositionalInfo { float positionX; float positionY; float positionZ; unsigned int prominence; unsigned int isVisible; unsigned int isInCanvas; } _metadataPositionalInfo;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char hasPendingChanges;
@property (nonatomic) char isVisible;
@property (nonatomic) unsigned int prominenceIndex;
@property (nonatomic) struct tagAVCPositionalInfo { unsigned int x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; } avcPositionalInfo;
@property (readonly, nonatomic) const struct tagVCSpatialAudioMetadataPositionalInfo { float x0; float x1; float x2; unsigned int x3; unsigned int x4; unsigned int x5; } *metadataPositionalInfo;
@property (nonatomic) char isInCanvas;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (void)unserialize:(id)a0;

@end
