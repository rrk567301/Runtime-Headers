@interface CSSceneClassification : CSExternalAnalysisTag <CSCoderEncoder>

@property unsigned long long sceneIdentifier;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property float sceneArea;
@property long long sceneType;
@property long long mediaType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCSCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithLabel:(id)a0 synonyms:(id)a1 confidence:(double)a2 sceneIdentifier:(unsigned long long)a3;

@end
