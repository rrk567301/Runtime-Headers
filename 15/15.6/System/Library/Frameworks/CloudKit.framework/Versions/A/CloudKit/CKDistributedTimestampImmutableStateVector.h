@class CKDistributedTimestampAttributedVector;

@interface CKDistributedTimestampImmutableStateVector : NSObject <CKDistributedTimestampVectorInternal, CKDistributedTimestampVector>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) CKDistributedTimestampAttributedVector *backingVector;

+ (void)initialize;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)__setBackingStateNoCopy:(id)a0;
- (void)_setBackingState:(id)a0;
- (id)allSiteIdentifiers;
- (unsigned char)atomStateForTimestamp:(id)a0;
- (unsigned char)clockTypeForTimestamp:(id)a0;
- (id)clockValuesForSiteIdentifier:(id)a0;
- (id)clockVector;
- (long long)compareToVector:(id)a0;
- (char)containsTimestampsWithAtomState:(unsigned char)a0;
- (id)descriptionWithStringSiteIdentifiers:(char)a0 usingSuperscripts:(char)a1;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)a0;
- (void)enumerateClockValuesForSiteIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (char)hasAtomStateNotInStateVector:(id)a0;
- (char)hasTimestampsNotInVector:(id)a0;
- (char)includesTimestamp:(id)a0;
- (id)initWithClockValuesInIndexSet:(id)a0 withAtomState:(unsigned char)a1 forSiteIdentifier:(id)a2;
- (char)isGreaterThanOrEqualToVector:(id)a0;
- (unsigned long long)timestampCount;
- (unsigned long long)timestampCountForSiteIdentifier:(id)a0;
- (unsigned char)vectorExpansionState;
- (id)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(id)a0;
- (id)vectorFilteredByAtomState:(unsigned char)a0;
- (id)vectorFilteredByClockType:(unsigned char)a0;
- (id)vectorFilteredByModifier:(id)a0;
- (id)vectorFilteredBySiteIdentifiers:(id)a0;

@end
