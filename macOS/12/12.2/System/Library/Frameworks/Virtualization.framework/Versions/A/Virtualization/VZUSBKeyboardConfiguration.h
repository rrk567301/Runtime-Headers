@interface VZUSBKeyboardConfiguration : VZKeyboardConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (int)_keyboard;
- (struct expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)makeKeyboardForVirtualMachine:(id)a0 keyboardIndex:(unsigned long long)a1;

@end
