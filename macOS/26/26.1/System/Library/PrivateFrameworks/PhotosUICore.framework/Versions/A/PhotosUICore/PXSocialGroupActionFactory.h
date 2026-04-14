@interface PXSocialGroupActionFactory : NSObject

+ (id)actionForAddingPeople:(id)a0 toSocialGroup:(id)a1;
+ (id)actionForCreatingSocialGroupWithPeople:(id)a0;
+ (id)actionForRejectingPeople:(id)a0 groups:(id)a1;
+ (id)actionForRemovingPeople:(id)a0 fromSocialGroup:(id)a1;
+ (id)actionForRenamingSocialGroup:(id)a0 newTitle:(id)a1;
+ (id)actionForSettingNewKeyAsset:(id)a0 forSocialGroup:(id)a1;
+ (id)internalActionForSettingAsMagicItem:(id)a0;

@end
