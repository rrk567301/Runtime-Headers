@class CKDistributedTimestampAttributedVector;

@interface CKDistributedTimestampImmutableClockVector : NSObject <CKDistributedTimestampVectorInternal, CKDistributedTimestampVector>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKDistributedTimestampAttributedVector *backingVector;

+ (void)initialize;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)__setBackingStateNoCopy:(id)a0;
- (void)_setBackingState:(id)a0;
- (id)allSiteIdentifiers;
- (unsigned char)clockTypeForTimestamp:(id)a0;
- (id)clockValuesForSiteIdentifier:(id)a0;
- (id)clockVector;
- (long long)compareToVector:(id)a0;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0 usingSuperscripts:(BOOL)a1;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)a0;
- (void)enumerateClockValuesForSiteIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasTimestampsNotInVector:(id)a0;
- (BOOL)includesTimestamp:(id)a0;
- (BOOL)isGreaterThanOrEqualToVector:(id)a0;
- (unsigned long long)timestampCount;
- (unsigned long long)timestampCountForSiteIdentifier:(id)a0;
- (unsigned char)vectorExpansionState;
- (id)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(id)a0;
- (id)vectorFilteredByClockType:(unsigned char)a0;
- (id)vectorFilteredByModifier:(id)a0;
- (id)vectorFilteredBySiteIdentifiers:(id)a0;

@end
