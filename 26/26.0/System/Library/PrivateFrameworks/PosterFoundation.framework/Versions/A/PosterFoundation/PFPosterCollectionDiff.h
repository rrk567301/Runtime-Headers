@class PFPosterCollection, NSSet, NSMapTable;

@interface PFPosterCollectionDiff : NSObject

@property (readonly, nonatomic) PFPosterCollection *lhsCollection;
@property (readonly, nonatomic) PFPosterCollection *rhsCollection;
@property (readonly, nonatomic) NSSet *addedPosters;
@property (readonly, nonatomic) NSSet *removedPosters;
@property (readonly, nonatomic) NSMapTable *updatedPosters;
@property (readonly, nonatomic) BOOL areCollectionsEqual;

+ (BOOL)diffCollection:(id)a0 toCollection:(id)a1 outAddedPosters:(out id *)a2 outRemovedPosters:(out id *)a3 outUpdatedPosters:(out id *)a4;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCollection:(id)a0 otherCollection:(id)a1;

@end
