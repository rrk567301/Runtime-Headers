@class NSString, NSNumber;

@interface PhotosUICore.LemonadeSearchCollectionResultsFeatureEmptyStateViewModel : NSObject <PXLemonadeCollectionsFeedEmptyStateViewModel> {
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ _message;
    void /* unknown type, empty encoding */ _numberOfAssetResults;
    void /* unknown type, empty encoding */ _actionHandler;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) NSNumber *numberOfAssetResults;
@property (nonatomic, copy) id /* block */ actionHandler;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 message:(id)a1 numberOfAssetResults:(long long)a2 actionHandler:(id /* block */)a3;

@end
