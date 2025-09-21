@class NSSet, NSOrderedSet, NSDictionary;

@interface PFPosterCollection : NSObject <NSFastEnumeration>

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *posters;
@property (readonly, nonatomic) NSOrderedSet *postersOrderedByCreationDate;
@property (readonly, nonatomic) NSDictionary *postersByProvider;
@property (readonly, nonatomic) NSDictionary *postersByDescriptorIdentifier;
@property (readonly, nonatomic) NSDictionary *postersByUUID;

+ (id)new;
+ (BOOL)validatePoster:(id)a0;
+ (id)posterUUIDForPoster:(id)a0;
+ (id)postersByDescriptorIdentifier:(id)a0;
+ (id)postersByProvider:(id)a0;
+ (id)postersByUUID:(id)a0;
+ (id)providerForPoster:(id)a0;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)initWithArray:(id)a0;
- (id)initWithSet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToCollection:(id)a0;
- (id)posterWithUUID:(id)a0;
- (id)collectionForPostersMatchingPredicate:(id)a0;
- (id)collectionForPostersMatchingRoles:(id)a0;
- (id)collectionForPostersPassingTest:(id /* block */)a0;
- (id)collectionForProvider:(id)a0;
- (id)initWithPosters:(id)a0;
- (id)posterForDescriptor:(id)a0;
- (id)postersForProvider:(id)a0;
- (id)postersMatchingPredicate:(id)a0;
- (id)postersMatchingRoles:(id)a0;
- (id)postersPassingTest:(id /* block */)a0;

@end
