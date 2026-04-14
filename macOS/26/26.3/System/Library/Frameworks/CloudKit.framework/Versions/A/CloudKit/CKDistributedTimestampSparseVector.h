@class NSDictionary;

@interface CKDistributedTimestampSparseVector : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *clockValues;

+ (void)initialize;

- (id)copy;
- (id)mutableCopy;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)__setBackingStateNoCopy:(id)a0;
- (void)_setBackingState:(id)a0;
- (id)allSiteIdentifiers;
- (id)clockValuesForSiteIdentifier:(id)a0;
- (unsigned long long)timestampCount;
- (unsigned long long)timestampCountForSiteIdentifier:(id)a0;
- (id)vectorFilteredByModifier:(id)a0;
- (id)vectorFilteredBySiteIdentifiers:(id)a0;

@end
