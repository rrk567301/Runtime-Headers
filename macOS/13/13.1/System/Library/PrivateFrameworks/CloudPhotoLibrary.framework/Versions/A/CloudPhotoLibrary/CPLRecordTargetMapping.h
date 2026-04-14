@class NSArray, NSSet, NSString, NSMutableDictionary, NSMutableSet;

@interface CPLRecordTargetMapping : NSObject {
    NSMutableDictionary *_targets;
    NSMutableDictionary *_targetsFromOtherScopedIdentifier;
    NSMutableSet *_updatedScopedIdentifiers;
    NSMutableSet *_scopedIdentifiersWithUnknownTargets;
}

@property (readonly, nonatomic) BOOL hasUnknownTargets;
@property (readonly, nonatomic) NSArray *allTargetScopedIdentifiers;
@property (readonly, nonatomic) NSArray *unknownTargetScopedIdentifiers;
@property (readonly, nonatomic) BOOL hasUpdatedTargets;
@property (readonly, nonatomic) NSSet *updatedTargetScopedIdentifiers;
@property (readonly, nonatomic) NSString *updatedTargetsDescription;
@property (readonly, nonatomic) NSString *targetDescriptions;

- (id)init;
- (void).cxx_destruct;
- (void)_setTarget:(id)a0 forRecordWithScopedIdentifier:(id)a1 isUpdate:(BOOL)a2;
- (void)setTarget:(id)a0 forRecordWithScopedIdentifier:(id)a1;
- (void)addKnownTarget:(id)a0 forRecordWithScopedIdentifier:(id)a1;
- (id)targetForRecordWithScopedIdentifier:(id)a0;
- (id)targetForRecordWithOtherScopedIdentifier:(id)a0;
- (void)enumerateTargetsWithBlock:(id /* block */)a0;
- (void)enumerateUnknownTargetsWithBlock:(id /* block */)a0;
- (void)startTrackingUpdates;
- (void)enumerateUpdatedTargetsWithBlock:(id /* block */)a0;

@end
