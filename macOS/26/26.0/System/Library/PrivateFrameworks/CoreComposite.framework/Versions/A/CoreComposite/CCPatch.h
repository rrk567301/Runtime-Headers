@interface CCPatch : NSObject <NSCopying, NSSecureCoding> {
    id _structContainer;
    struct CCPatchStruct { char x0; char x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; char x8; char x9; long long x10; } *_struct;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) char atlasID;
@property (nonatomic) char viewID;
@property (nonatomic) long long sizeX;
@property (nonatomic) long long sizeY;
@property (nonatomic) long long positionInViewX;
@property (nonatomic) long long positionInViewY;
@property (nonatomic) long long positionInAtlasX;
@property (nonatomic) long long positionInAtlasY;
@property (nonatomic) char rotation;
@property (nonatomic) char flip;
@property (nonatomic) long long patchID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)attachToOwner:(id)a0 withStruct:(struct CCPatchStruct { char x0; char x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; char x8; char x9; long long x10; } *)a1;
- (void)loadFromStruct;

@end
