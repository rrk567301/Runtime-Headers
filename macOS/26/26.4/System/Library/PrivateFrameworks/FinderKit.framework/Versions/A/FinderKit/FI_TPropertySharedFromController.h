@class FI_TReturnToSenderPillView, SWAttributionView, NSString, NSMenu;

@interface FI_TPropertySharedFromController : FI_IPropertyValueController <NSMenuDelegate> {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct { struct TFENode *__cap_; } ; } _nodes;
}

@property (retain, nonatomic) SWAttributionView *attributionView;
@property (retain, nonatomic) FI_TReturnToSenderPillView *originatorView;
@property (retain, nonatomic) NSMenu *contextMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mouseUp:(id)a0;
- (void)initCommon;
- (BOOL)shouldBeVisible;
- (void).cxx_destruct;
- (BOOL)isReturnToSender;
- (void)mouseDown:(id)a0;
- (id).cxx_construct;
- (void)menuNeedsUpdate:(id)a0;
- (void)setValue:(id)a0;
- (id)validRequestorForSendType:(id)a0 returnType:(id)a1;
- (void)updateWithNodes:(const void *)a0;

@end
