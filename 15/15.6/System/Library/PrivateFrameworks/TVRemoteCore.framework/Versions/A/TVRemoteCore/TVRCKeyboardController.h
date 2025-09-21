@class NSString, TVRCDevice, TVRCKeyboardAttributes;
@protocol TVRCKeyboardControllerDelegate;

@interface TVRCKeyboardController : NSObject {
    TVRCDevice *_device;
    char _editing;
    TVRCKeyboardAttributes *_attributes;
    NSString *_text;
}

@property (weak, nonatomic) id<TVRCKeyboardControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isEditing) char editing;
@property (readonly, nonatomic) TVRCKeyboardAttributes *attributes;
@property (copy, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)_initWithDevice:(id)a0;
- (void)_setCurrentState:(id)a0;
- (void)sendReturnKey;

@end
