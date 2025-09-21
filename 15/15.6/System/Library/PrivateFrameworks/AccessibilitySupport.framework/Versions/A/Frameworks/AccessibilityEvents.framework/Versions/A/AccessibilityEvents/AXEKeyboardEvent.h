@class NSString;

@interface AXEKeyboardEvent : NSObject <NSCopying>

@property (nonatomic) unsigned long long keyCode;
@property (copy, nonatomic) NSString *unicodeCharacter;
@property char isDownEvent;
@property char isRepeatEvent;
@property char isModifierChangedEvent;
@property char isCommandDown;
@property char isLeftCommandDown;
@property char isRightCommandDown;
@property char isOptionDown;
@property char isLeftOptionDown;
@property char isRightOptionDown;
@property char isControlDown;
@property char isLeftControlDown;
@property char isRightControlDown;
@property char isShiftDown;
@property char isLeftShiftDown;
@property char isRightShiftDown;
@property char isFnDown;
@property char isArrowKeyDown;
@property char isSynthesized;
@property (nonatomic) unsigned long long _flags;
@property (nonatomic) struct __CGEvent { } *_cgEvent;
@property (readonly) char isDown;
@property (readonly) char isRepeat;
@property (readonly) long long modifierMask;

+ (id)eventFromCGEvent:(struct __CGEvent { } *)a0;
+ (char)isArrowKey:(unsigned long long)a0;
+ (char)isKeyboardEvent:(struct __CGEvent { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (char)isHotkeyComboDownWithCharCode:(unsigned short)a0 keyCode:(unsigned short)a1 modifiers:(unsigned int)a2;

@end
