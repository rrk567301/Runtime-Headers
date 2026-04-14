@class NSIndexSet;
@protocol PXUIImageProvider;

@interface PXSidebarImageRequestDetails : NSObject

@property (readonly, nonatomic) long long sidebarRequestID;
@property (copy, nonatomic) NSIndexSet *mediaRequestIDs;
@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;

- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMediaProvider:(id)a0 mediaRequestIDs:(id)a1;

@end
