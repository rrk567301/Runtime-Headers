@class NSString, AXSSKeyChord;

@interface AXSSKeyboardEvent : NSObject <NSCopying>

@property (nonatomic) unsigned long long keyCode;
@property (copy, nonatomic) NSString *unicodeCharacter;
@property (copy, nonatomic) NSString *backupUnicodeCharacter;
@property (nonatomic) char isDownEvent;
@property (nonatomic) char isRepeatEvent;
@property (nonatomic) char isModifierChangedEvent;
@property (readonly, nonatomic) char isCommandDown;
@property (nonatomic) char isLeftCommandDown;
@property (nonatomic) char isRightCommandDown;
@property (readonly, nonatomic) char isOptionDown;
@property (nonatomic) char isLeftOptionDown;
@property (nonatomic) char isRightOptionDown;
@property (readonly, nonatomic) char isControlDown;
@property (nonatomic) char isLeftControlDown;
@property (nonatomic) char isRightControlDown;
@property (readonly, nonatomic) char isShiftDown;
@property (nonatomic) char isLeftShiftDown;
@property (nonatomic) char isRightShiftDown;
@property (nonatomic) char isCapsLockDown;
@property (nonatomic) char isFnDown;
@property (readonly, nonatomic) long long modifierMask;
@property (readonly, nonatomic) AXSSKeyChord *keyChord;
@property (readonly, nonatomic) AXSSKeyChord *backupKeyChord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_keyChordForUnicodeCharacter:(id)a0;

@end
