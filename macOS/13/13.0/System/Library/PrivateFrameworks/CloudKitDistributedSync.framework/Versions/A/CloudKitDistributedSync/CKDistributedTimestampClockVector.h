@class CKDistributedTimestampAttributedVector;

@interface CKDistributedTimestampClockVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKDistributedTimestampAttributedVector *backingVector;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)timestampCount;
- (id)allSiteIdentifiers;
- (BOOL)isGreaterThanOrEqualToVector:(id)a0;
- (void)minusVector:(id)a0;
- (void)intersectVector:(id)a0;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)a0;
- (id)clockVector;
- (id)clockValuesForSiteIdentifier:(id)a0;
- (void)unionVector:(id)a0;
- (BOOL)includesTimestamp:(id)a0;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0 usingSuperscripts:(BOOL)a1;
- (unsigned long long)timestampCountForSiteIdentifier:(id)a0;
- (void)addClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (void)removeClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (id)vectorFilteredBySiteIdentifiers:(id)a0;
- (id)vectorFilteredByModifier:(id)a0;
- (void)_maintainInvariants;
- (void)enumerateClockValuesForSiteIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (id)allModifiers;
- (unsigned char)clockTypeForModifier:(id)a0;
- (id)clockTypesForAllModifiers;
- (unsigned char)clockTypeForTimestamp:(id)a0;
- (long long)compareToVector:(id)a0;
- (BOOL)hasTimestampsNotInVector:(id)a0;
- (unsigned char)vectorExpansionState;
- (void)addClockValuesInIndexSet:(id)a0 withClockType:(unsigned char)a1 forSiteIdentifier:(id)a2;
- (void)_checkInvariantsAgainstVector:(id)a0;
- (void)_checkInvariantsAgainstClockValues:(id)a0 withSiteIdentifier:(id)a1 ofType:(unsigned char)a2;
- (id)vectorFilteredByClockType:(unsigned char)a0;
- (id)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(id)a0;

@end
