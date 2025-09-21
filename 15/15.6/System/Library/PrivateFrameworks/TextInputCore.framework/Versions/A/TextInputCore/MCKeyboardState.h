@interface MCKeyboardState : NSObject <NSCopying>

@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) char isSplitKeyboard;
@property (readonly, nonatomic) char isFloatingKeyboard;
@property (readonly, nonatomic) char isHardwareKeyboard;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithUserInterfaceIdiom:(long long)a0 isSplitKeyboard:(char)a1 isFloatingKeyboard:(char)a2 isHardwareKeyboard:(char)a3;

@end
