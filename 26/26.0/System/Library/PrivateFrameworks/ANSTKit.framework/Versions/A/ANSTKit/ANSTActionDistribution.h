@class NSDictionary, NSString;

@interface ANSTActionDistribution : ANSTObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *distribution;
@property (readonly, nonatomic) NSString *mostLikelyActionType;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAcObject:(struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; } *)a0;
- (id)initWithObjectID:(unsigned long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(unsigned long long)a2 distance:(float)a3 distribution:(id)a4;
- (id)initWithObjectID:(unsigned long long)a0 groupID:(unsigned long long)a1 category:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(unsigned long long)a4 distance:(float)a5;

@end
