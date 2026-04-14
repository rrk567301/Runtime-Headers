@class NSNumber;

@interface PhotosUICore.LemonadeSearchCollectionResultsFeatureEmptyStateViewModel : NSObject <PXLemonadeCollectionsFeedEmptyStateViewModel> {
    void /* unknown type, empty encoding */ _numberOfAssetResults;
    void /* unknown type, empty encoding */ _actionHandler;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (nonatomic, retain) NSNumber *numberOfAssetResults;
@property (nonatomic, copy) id /* block */ actionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNumberOfAssetResults:(long long)a0 actionHandler:(id /* block */)a1;

@end
