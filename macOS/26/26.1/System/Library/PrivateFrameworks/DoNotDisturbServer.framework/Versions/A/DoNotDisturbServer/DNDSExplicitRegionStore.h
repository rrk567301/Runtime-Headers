@class NSSet;

@interface DNDSExplicitRegionStore : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSSet *enteredRegionIdentifiersPendingExit;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithStore:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_initWithEnteredRegionIdentifiersPendingExit:(id)a0;

@end
