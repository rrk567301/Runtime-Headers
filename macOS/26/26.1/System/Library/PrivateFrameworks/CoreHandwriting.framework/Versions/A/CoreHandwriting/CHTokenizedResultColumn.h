@class NSArray, NSIndexSet;

@interface CHTokenizedResultColumn : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *tokenRows;
@property (readonly, copy, nonatomic) NSArray *textTokenRows;
@property (readonly, copy, nonatomic) NSArray *mathTokenRows;
@property (readonly, nonatomic) NSIndexSet *strokeIndexes;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)containsStartingTokenEquivalentToToken:(id)a0;
- (long long)indexOfEquivalentTokenRow:(id)a0 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithTokenRows:(id)a0;

@end
