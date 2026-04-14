@class NSString;

@interface FI_TAlertCallbackStub : NSObject <TStdAlertSheetClientProtocol> {
    FI_TAlertCallbackStub *fSelf;
}

@property (nonatomic) struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } ok;
@property (nonatomic) struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } cancel;
@property (nonatomic) struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } other;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)hasOther;
- (BOOL)hasCancel;
- (void)stdAlertSheetOtherButtonPressed;
- (void)stdAlertSheetCancelButtonPressed;
- (void)stdAlertSheetOKButtonPressed;

@end
