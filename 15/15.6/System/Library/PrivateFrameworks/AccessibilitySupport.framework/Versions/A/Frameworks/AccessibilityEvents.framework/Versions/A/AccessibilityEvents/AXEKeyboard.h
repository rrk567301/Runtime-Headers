@class NSSet;

@interface AXEKeyboard : NSObject {
    struct __CGEventSource { } *__eventSource;
}

@property (class, readonly) AXEKeyboard *shared;

@property (nonatomic) unsigned int _eventTapLocation;
@property (nonatomic) unsigned long long _modifierFlags;
@property (readonly, nonatomic) char isAnyKeyDown;
@property (readonly, nonatomic) char isAnyModifierDown;
@property (readonly, nonatomic) char isCommandDown;
@property (readonly, nonatomic) char isOptionDown;
@property (readonly, nonatomic) char isControlDown;
@property (readonly, nonatomic) char isShiftDown;
@property (readonly, nonatomic) char isFnDown;
@property (readonly, nonatomic) char isCapsLockDown;
@property (readonly, copy, nonatomic) NSSet *downKeys;
@property (readonly, nonatomic) char _supportsBuiltinEscKey;

+ (id)modifierFlagTable;

- (void)dealloc;
- (void)_setModifierFlags:(unsigned long long)a0;
- (struct __CGEventSource { } *)_eventSource;
- (void)_clearModifierFlags:(unsigned long long)a0;
- (id)_initWithEventTapLocation:(unsigned int)a0;
- (char)isKeyDown:(unsigned long long)a0;
- (void)pressKey:(unsigned long long)a0;
- (void)releaseKey:(unsigned long long)a0;

@end
