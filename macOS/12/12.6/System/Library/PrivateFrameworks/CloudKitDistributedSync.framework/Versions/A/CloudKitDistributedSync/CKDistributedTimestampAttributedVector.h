@class NSMutableDictionary;

@interface CKDistributedTimestampAttributedVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *attributeToSparseVector;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)intersectVector:(id)a0;
- (unsigned long long)timestampCount;
- (id)allSiteIdentifiers;
- (void)enumerateClockValuesForSiteIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)minusVector:(id)a0;
- (id)descriptionWithStringSiteIdentifiers;
- (id)vectorFilteredByClockType:(unsigned char)a0;
- (unsigned long long)timestampCountForSiteIdentifier:(id)a0;
- (void)removeClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (id)clockValuesForSiteIdentifier:(id)a0;
- (id)vectorFilteredBySiteIdentifiers:(id)a0;
- (id)vectorFilteredByModifier:(id)a0;
- (void)_maintainInvariants;
- (id)vectorWithoutAttributes;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0;
- (void)minusVector:(id)a0 forAttribute:(unsigned short)a1;
- (void)addAllClockValuesFromVector:(id)a0;
- (void)intersectAttributedVector:(id)a0;
- (void)addClockValuesInIndexSet:(id)a0 withAttribute:(unsigned short)a1 forSiteIdentifier:(id)a2;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)a0;
- (id)vectorFilteredByAttribute:(unsigned short)a0;
- (id)vectorWithAttributeReplacementBlock:(id /* block */)a0;
- (id)winningLWWTimestampForModifier:(id)a0 winningAttribute:(unsigned short *)a1;
- (id)vectorFillingInImplicitClockValuesWithAtomState:(unsigned char)a0 usingSiteIdentifiers:(id)a1;
- (id)vectorFilteredByAtomState:(unsigned char)a0;

@end
