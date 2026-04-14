@class NSSet;
@protocol PXActionPerformerDelegate;

@interface PXActionManager : NSObject

@property (weak, nonatomic) id<PXActionPerformerDelegate> performerDelegate;
@property (copy, nonatomic) NSSet *allowedActionTypes;

+ (void)setEnsureUnlockedDeviceHandler:(id /* block */)a0;
+ (id /* block */)_unlockDeviceHandler;

- (void).cxx_destruct;
- (BOOL)canPerformActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (BOOL)isActionTypeAllowed:(id)a0;
- (BOOL)supportsActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (id)systemImageNameForActionType:(id)a0;

@end
