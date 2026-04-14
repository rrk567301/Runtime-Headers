@class NSMutableDictionary;

@interface CKDistributedTimestampSparseVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *clockValues;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)unionVector:(id)a0;
- (id)clockValuesForSiteIdentifier:(id)a0;
- (unsigned long long)timestampCount;
- (id)allSiteIdentifiers;
- (void)minusVector:(id)a0;
- (void)intersectVector:(id)a0;
- (unsigned long long)timestampCountForSiteIdentifier:(id)a0;
- (void)addClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (void)removeClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (id)vectorFilteredBySiteIdentifiers:(id)a0;
- (id)vectorFilteredByModifier:(id)a0;

@end
