@class NSString;

@interface AVTouchBarCaptureInputSourceItem : NSObject

@property (readonly) NSString *title;
@property (readonly, getter=isBuiltIn) char builtIn;
@property (readonly, getter=isNoAudioItem) char noAudioItem;
@property (readonly, getter=isEnabled) char enabled;
@property (retain) id representedObject;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 builtIn:(char)a1 noAudioItem:(char)a2 enabled:(char)a3;

@end
