@class NSString;
@protocol PXCMMFeedItemButtonViewDelegate;

@interface PXCMMFeedItemButtonViewConfiguration : NSObject <PXGViewUserData>

@property (weak, nonatomic) id<PXCMMFeedItemButtonViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
