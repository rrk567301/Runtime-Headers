@class NSArray, VUWGalleryPersonalizationOptions;

@interface MADPersonalizedEmbeddingRequest : MADMultiModalRequest

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetBounds;
@property (retain, nonatomic) VUWGalleryPersonalizationOptions *personalizationOptions;
@property (nonatomic) long long type;
@property (nonatomic) long long revision;
@property (nonatomic) BOOL bypassFaceDetection;
@property (readonly, nonatomic) NSArray *embeddingResults;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
