@class NSString, PXGScrollViewModel;
@protocol PXGScrollViewContainerDelegate;

@interface PXGScrollViewContainerConfiguration : NSObject <PXGViewUserData>

@property (retain, nonatomic) PXGScrollViewModel *scrollViewModel;
@property (weak, nonatomic) id<PXGScrollViewContainerDelegate> delegate;
@property (readonly, nonatomic) long long viewFloatingAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
