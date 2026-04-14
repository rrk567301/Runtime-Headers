@class NSString;
@protocol PXGFocusableViewDelegate;

@interface PXGFocusableViewConfiguration : NSObject <PXGViewUserData>

@property (weak, nonatomic) id<PXGFocusableViewDelegate> delegate;
@property (nonatomic) long long focusability;
@property (copy, nonatomic) NSString *debugName;
@property (readonly, nonatomic) long long viewFloatingAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
