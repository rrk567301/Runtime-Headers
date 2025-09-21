@interface IMKKeyboardState : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long keyModifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)initWithKeyModifiers:(unsigned long long)a0;
- (char)isInShortcutState;
- (char)isModifiedBy:(unsigned long long)a0;
- (char)isModifiedByAny:(unsigned long long)a0;
- (char)isModifiedByNoneOrAny:(unsigned long long)a0;
- (id)keyboardStateWithAdditionalModifiers:(unsigned long long)a0;

@end
