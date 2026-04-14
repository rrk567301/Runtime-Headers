@class NSString, NSMatrix;

@interface DROpticalDiscEraseView : NSView <NSFileManagerDelegate> {
    NSMatrix *_eraseTypeMatrix;
    id _controller;
    id _target;
    SEL _action;
    id _device;
    id _delegate;
    BOOL _enabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)opticalDiscEraseView;

- (void)setDevice:(id)a0;
- (void)setTarget:(id)a0;
- (SEL)action;
- (void)setAction:(SEL)a0;
- (void)setController:(id)a0;
- (id)target;
- (id)device;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void)_confirmSheetDidDismiss:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)beginErase:(id)a0;
- (id)eraseObject;
- (void)eraseStatusChanged:(id)a0;
- (BOOL)mediaEraseController:(id)a0 deviceContainsSuitableMedia:(id)a1 promptString:(id *)a2;
- (void)mediaEraseControllerMediaDidFailToEject:(id)a0;
- (BOOL)mediaEraseControllerShouldHandleMediaReservations:(id)a0;
- (void)setEraseTypeMatrix:(id)a0;

@end
