@class NUComposition, DGDescription, NSObject;
@protocol OS_dispatch_group;

@interface PAAdjustmentDataCacheEntry : NSObject

@property (retain) NSObject<OS_dispatch_group> *group;
@property (retain) DGDescription *renderDescription;
@property (retain) NUComposition *composition;
@property long long disposition;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (void)_load:(id)a0;
- (void)deliverOn:(id)a0 completion:(id /* block */)a1;

@end
