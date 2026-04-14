@class NSDictionary, NSMutableDictionary;

@interface CKDistributedTimestampAttributedVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *mutableAttributeToSparseVector;
@property (readonly, nonatomic) NSDictionary *attributeToSparseVector;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)minusVector:(id)a0;
- (void)intersectVector:(id)a0;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)a0;
- (id)clockValuesForSiteIdentifier:(id)a0;
- (unsigned long long)timestampCount;
- (id)vectorFilteredByAtomState:(unsigned char)a0;
- (id)allSiteIdentifiers;
- (unsigned long long)timestampCountForSiteIdentifier:(id)a0;
- (void)removeClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (id)vectorFilteredBySiteIdentifiers:(id)a0;
- (id)vectorFilteredByModifier:(id)a0;
- (unsigned short)attributeForTimestamp:(id)a0;
- (void)minusVector:(id)a0 forAttribute:(unsigned short)a1;
- (void)addAllClockValuesFromVector:(id)a0;
- (void)intersectAttributedVector:(id)a0;
- (void)addClockValuesInIndexSet:(id)a0 withAttribute:(unsigned short)a1 forSiteIdentifier:(id)a2;
- (void)_maintainInvariants;
- (void)enumerateClockValuesForSiteIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (id)vectorWithoutAttributes;
- (id)vectorFilteredByAttribute:(unsigned short)a0;
- (id)vectorWithAttributeReplacementBlock:(id /* block */)a0;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0;
- (id)descriptionWithStringSiteIdentifiers;
- (id)vectorFilteredByClockType:(unsigned char)a0;
- (id)winningLWWTimestampForModifier:(id)a0 winningAttribute:(unsigned short *)a1;
- (unsigned long long)timestampCountForAtomState:(unsigned char)a0;
- (id)vectorFillingInImplicitClockValuesWithAtomState:(unsigned char)a0 usingSiteIdentifiers:(id)a1;

@end
