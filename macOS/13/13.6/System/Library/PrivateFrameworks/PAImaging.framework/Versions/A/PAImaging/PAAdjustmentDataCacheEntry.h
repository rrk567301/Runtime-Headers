@class PICompositionController, NSObject;
@protocol OS_dispatch_group;

@interface PAAdjustmentDataCacheEntry : NSObject

@property (retain) NSObject<OS_dispatch_group> *group;
@property (retain) PICompositionController *compositionController;
@property long long disposition;
@property struct PFIntSize_st { unsigned long long width; unsigned long long height; } inputSize;
@property BOOL networkAccessAllowed;

- (void).cxx_destruct;
- (void)_load:(id)a0;
- (void)deliverOn:(id)a0 completion:(id /* block */)a1;
- (id)initWithAsset:(id)a0 networkAccessAllowed:(BOOL)a1;

@end
