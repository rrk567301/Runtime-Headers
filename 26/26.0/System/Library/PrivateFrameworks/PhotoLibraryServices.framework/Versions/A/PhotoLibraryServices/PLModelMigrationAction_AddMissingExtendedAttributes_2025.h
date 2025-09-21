@class NSProgress, NSString, NSArray;

@interface PLModelMigrationAction_AddMissingExtendedAttributes_2025 : PLModelMigrationActionBackground <PLModelMigrationAction> {
    NSArray *_codecs;
}

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionProgressWeight;

- (void)setup;
- (id)startDate;
- (void).cxx_destruct;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;
- (id)predicateForMigrationAction;
- (id)requestWithManagedObjectContext:(id)a0;
- (void)updateVideoProResPropertiesForAsset:(id)a0 metadata:(id)a1;

@end
