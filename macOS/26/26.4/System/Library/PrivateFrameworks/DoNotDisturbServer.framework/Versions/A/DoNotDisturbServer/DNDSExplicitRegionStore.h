@class NSSet;

@interface DNDSExplicitRegionStore : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSSet *enteredRegionIdentifiersPendingExit;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)_initWithStore:(id)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)_initWithEnteredRegionIdentifiersPendingExit:(id)a0;

@end
