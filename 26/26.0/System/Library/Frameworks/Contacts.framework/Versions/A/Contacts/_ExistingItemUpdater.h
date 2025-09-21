@class NSString, NSArray, NSError, NSManagedObjectContext;

@interface _ExistingItemUpdater : NSObject <CNContactPosterDataItemVisitor> {
    NSString *_contactIdentifier;
    NSArray *_existingPosters;
    NSArray *_existingImages;
    NSManagedObjectContext *_context;
    long long _countOfAddedPosters;
    long long _countOfAddedImages;
    BOOL _updateIsCurrent;
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertImage:(id)a0;
- (void).cxx_destruct;
- (void)visitImage:(id)a0;
- (void)enforceImageQuotas;
- (void)enforcePosterQuotas;
- (void)enforceQuotas;
- (id)existingPosterWithIdentifier:(id)a0;
- (BOOL)fetchExistingImages;
- (BOOL)fetchExistingItems;
- (BOOL)fetchExistingPosters;
- (BOOL)getResult:(id *)a0;
- (id)initWithContactIdentifier:(id)a0 updateIsCurrent:(BOOL)a1 context:(id)a2;
- (void)insertPoster:(id)a0;
- (void)processCreatedAndUpdatedItems:(id)a0;
- (BOOL)updateExistingImagesWithImage:(id)a0;
- (BOOL)updateExistingPostersWithPoster:(id)a0;
- (void)visitPoster:(id)a0;

@end
