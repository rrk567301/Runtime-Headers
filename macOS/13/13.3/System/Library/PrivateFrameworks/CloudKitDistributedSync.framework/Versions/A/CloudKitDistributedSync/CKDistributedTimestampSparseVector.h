@class NSMutableDictionary;

@interface CKDistributedTimestampSparseVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *clockValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allSiteIdentifiers;
- (id)clockValuesForSiteIdentifier:(id)a0;
- (void)intersectVector:(id)a0;
- (void)minusVector:(id)a0;
- (unsigned long long)timestampCount;
- (void)unionVector:(id)a0;
- (void)addClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (void)removeClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (unsigned long long)timestampCountForSiteIdentifier:(id)a0;
- (id)vectorFilteredByModifier:(id)a0;
- (id)vectorFilteredBySiteIdentifiers:(id)a0;

@end
