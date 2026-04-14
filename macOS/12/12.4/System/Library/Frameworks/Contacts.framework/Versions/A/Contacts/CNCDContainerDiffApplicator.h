@class CNCDSaveContext;

@interface CNCDContainerDiffApplicator : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;

- (void).cxx_destruct;
- (void)applyDiff:(id)a0 toContainerWithIdentifier:(id)a1;
- (id)initWithSaveContext:(id)a0;
- (void)setGuardianRestricted:(BOOL)a0 onContainerWithIdentifier:(id)a1;

@end
