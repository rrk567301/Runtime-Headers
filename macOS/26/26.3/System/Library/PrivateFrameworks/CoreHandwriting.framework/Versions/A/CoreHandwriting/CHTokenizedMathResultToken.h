@class NSString;

@interface CHTokenizedMathResultToken : CHTokenizedResultToken <NSCopying, NSMutableCopying> {
    unsigned long long _properties;
}

@property (readonly, nonatomic) unsigned long long properties;
@property (readonly, copy, nonatomic) NSString *maskedAlternative;
@property (readonly, nonatomic) double maskedAlternativeScore;
@property (readonly, nonatomic) double score;

+ (BOOL)supportsSecureCoding;
+ (id)updatedToken:(id)a0 withString:(id)a1;
+ (id)updatedToken:(id)a0 withString:(id)a1 withTokenProperty:(unsigned long long)a2;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithString:(id)a0 strokeIndexes:(id)a1 score:(double)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 properties:(unsigned long long)a4;
- (id)initWithString:(id)a0 strokeIndexes:(id)a1 score:(double)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 properties:(unsigned long long)a4 maskedAlternative:(id)a5 maskedAlternativeScore:(double)a6;
- (BOOL)isEqualToTokenizedMathResultToken:(id)a0;
- (BOOL)isEquivalentToToken:(id)a0;

@end
