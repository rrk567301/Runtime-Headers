@class NSArray, NSString;

@interface PXMovePersonActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXPhotoKitPersonActionPerformer> {
    void /* function */ sourcePeople;
    void /* function */ targetLocalIdentifier;
}

@property (nonatomic, copy) NSArray *sourcePeople;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long destinationManualOrder;
@property (nonatomic) long long destinationType;
@property (nonatomic, copy) NSString *targetLocalIdentifier;

+ (BOOL)canPerformOn:(id)a0;
+ (id)localizedTitleForPerson:(id)a0;
+ (id)systemImageNameForPerson:(id)a0;

- (void).cxx_destruct;
- (void)performBackgroundTask;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 parameters:(id)a2;

@end
