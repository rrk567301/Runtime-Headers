@class NSArray;

@interface PXMovePersonActionPerformer : PXAssetCollectionActionPerformer <PXPhotoKitPersonActionPerformer> {
    void /* unknown type, empty encoding */ sourcePeople;
}

@property (nonatomic, copy) NSArray *sourcePeople;
@property (nonatomic) void /* unknown type, empty encoding */ destinationManualOrder;
@property (nonatomic) void /* unknown type, empty encoding */ destinationType;

+ (BOOL)canPerformOn:(id)a0;
+ (id)localizedTitleForPerson:(id)a0;
+ (id)systemImageNameForPerson:(id)a0;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;
- (void)performBackgroundTask;

@end
