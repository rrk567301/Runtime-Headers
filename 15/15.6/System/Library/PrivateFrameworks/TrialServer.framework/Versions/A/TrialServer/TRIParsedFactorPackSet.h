@class NSString, NSArray;
@protocol TRIFactorPackSetId;

@interface TRIParsedFactorPackSet : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *ident;
@property (readonly, nonatomic) NSArray *packs;

+ (id)setWithIdent:(id)a0 packs:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToSet:(id)a0;
- (id)copyWithReplacementIdent:(id)a0;
- (id)copyWithReplacementPacks:(id)a0;
- (id)initWithIdent:(id)a0 packs:(id)a1;

@end
