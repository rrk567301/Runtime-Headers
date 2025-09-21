@class NSObject;
@protocol OS_dispatch_queue;

@interface PFParallaxAssetResourceOptions : NSObject

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) char aspectFit;
@property (copy, nonatomic) id /* block */ canHandleAdjustmentData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (copy, nonatomic) id /* block */ downloadProgressHandler;
@property (nonatomic) char networkAccessAllowed;
@property (nonatomic) long long priority;

- (void).cxx_destruct;

@end
