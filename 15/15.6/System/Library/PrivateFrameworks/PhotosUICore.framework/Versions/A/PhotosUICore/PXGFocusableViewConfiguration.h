@class NSString;
@protocol PXGFocusableViewDelegate;

@interface PXGFocusableViewConfiguration : NSObject <PXGViewUserData>

@property (weak, nonatomic) id<PXGFocusableViewDelegate> delegate;
@property (nonatomic) long long focusability;
@property (copy, nonatomic) NSString *debugName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
