@class PHPhotoLibrary, PHFetchResult, NSDictionary;

@interface PXPhotoKitPersonActionManager : PXActionManager

@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSDictionary *performerClassByType;
@property (readonly, nonatomic) NSDictionary *personActionTypeByGenericType;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPeople:(id)a0;
- (id)initWithPerson:(id)a0;
- (char)canPerformActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (id)contextMenuElementsWithHandler:(id /* block */)a0;
- (id)_actionPerformerForActionType:(id)a0 checkIfCanPerformAction:(char)a1;
- (Class)_validatedPerformerClassForActionType:(id)a0 checkIfCanPerformAction:(char)a1;
- (id)actionPerformerForActionType:(id)a0 parameters:(id)a1;
- (id)actionTypeForGenericType:(id)a0;
- (char)isDestructiveActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (id)systemImageNameForActionType:(id)a0;

@end
