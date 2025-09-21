@class NSString, NSData, NSDate, NSMutableSet;

@interface PRLikeness : NSObject <NSSecureCoding> {
    struct CGImage { } *_staticRepresentation;
    NSData *_staticRepresentationData;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, setter=setCurrent:) char isCurrent;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *softExpirationDate;
@property (retain, nonatomic) NSData *staticRepresentationData;
@property (retain, nonatomic) NSString *ownerID;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) long long source;
@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, nonatomic) NSString *scopeDescription;
@property (retain, nonatomic) NSDate *insertionDate;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSMutableSet *dirtyProperties;
@property (readonly, nonatomic) char isDirty;
@property (copy, nonatomic) NSData *recipe;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRectForTopLeftOrigin;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRectForBottomLeftOrigin;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *externalIdentifier;

+ (id)_dateFormatter;
+ (id)photoWithImage:(struct CGImage { } *)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_flippedRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeToImage:(struct CGImage { } *)a1;
+ (id)_photoWithScope:(unsigned long long)a0 image:(struct CGImage { } *)a1 cropRectForTopLeftOrigin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (char)automaticallyNotifiesObserversOfCropRectForTopLeftOrigin;
+ (id)descriptionForScope:(unsigned long long)a0;
+ (id)diddlySquatLikeness;
+ (id)likenessWithPropagatedData:(id)a0;
+ (id)monogramWithRecipe:(id)a0 staticRepresentation:(struct CGImage { } *)a1;
+ (id)monogramWithScope:(unsigned long long)a0 recipe:(id)a1 staticRepresentation:(struct CGImage { } *)a2;
+ (id)photoWithImage:(struct CGImage { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)photoWithImage:(struct CGImage { } *)a0 cropRectForBottomLeftOrigin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)photoWithImage:(struct CGImage { } *)a0 cropRectForTopLeftOrigin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)photoWithScope:(unsigned long long)a0 image:(struct CGImage { } *)a1;
+ (unsigned long long)scopeFromDescription:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearDirtyProperties;
- (id)_initWithIdentifier:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForBottomLeftOrigin;
- (id)dataForPropagation;
- (char)isDiddlySquat;
- (void)setStaticRepresentation:(struct CGImage { } *)a0;
- (struct CGImage { } *)staticRepresentation;

@end
