@class NSSet;

@interface DNDSExplicitRegionStore : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSSet *enteredRegionIdentifiersPendingExit;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_initWithStore:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithEnteredRegionIdentifiersPendingExit:(id)a0;

@end
