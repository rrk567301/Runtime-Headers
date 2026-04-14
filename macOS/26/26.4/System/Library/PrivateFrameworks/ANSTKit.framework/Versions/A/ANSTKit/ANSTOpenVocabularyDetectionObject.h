@interface ANSTOpenVocabularyDetectionObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) unsigned long long objectID;
@property (readonly, nonatomic) unsigned long long groupID;
@property (readonly, nonatomic) float saliency;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAcOVDObject:(struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; unsigned int x5; } *)a0;
- (id)initWithObjectID:(unsigned long long)a0 groupID:(unsigned long long)a1 category:(long long)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(unsigned long long)a4 saliency:(float)a5;

@end
