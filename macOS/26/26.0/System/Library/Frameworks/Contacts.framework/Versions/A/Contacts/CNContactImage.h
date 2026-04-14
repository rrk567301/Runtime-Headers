@class CNVisualFingerprint, NSString, NSData, CNContactPoster;

@interface CNContactImage : CNContactPosterDataItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) long long encodingType;
@property (retain, nonatomic) NSString *variant;
@property (retain, nonatomic) NSData *poseConfigurationData;
@property (retain, nonatomic) NSString *displayString;
@property (retain, nonatomic) CNVisualFingerprint *visualFingerprint;
@property (weak, nonatomic) CNContactPoster *pairedPoster;

- (id)initWithManagedObject:(id)a0;
- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithNewImageData:(id)a0;
- (id)copyWithNewImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithIdentifier:(id)a0 imageData:(id)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 lastUsedDate:(id)a3;
- (id)initWithIdentifier:(id)a0 imageData:(id)a1 lastUsedDate:(id)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 source:(long long)a4 sourceIdentifier:(id)a5 encodingType:(long long)a6 variant:(id)a7 poseConfigurationData:(id)a8 displayString:(id)a9 ignoredForRevert:(BOOL)a10 itemDetails:(unsigned long long)a11;
- (id)initWithImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 lastUsedDate:(id)a2;
- (id)initWithImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 lastUsedDate:(id)a2 source:(long long)a3;
- (id)initWithManagedObject:(id)a0 poster:(id)a1;
- (id)resizedContactImageForMeCardSharing;
- (id)resizedContactImageToMaxEdgeWidth:(unsigned long long)a0;

@end
