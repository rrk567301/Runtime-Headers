@interface NSStatusItemSendEventAction : BSAction

@property unsigned long long type;
@property struct CGPoint { double x; double y; } location;
@property unsigned long long modifierFlags;
@property double timestamp;
@property long long eventNumber;
@property long long clickCount;

+ (id)actionForEvent:(id)a0 relativeTo:(id)a1;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)createEventRelativeToView:(id)a0;

@end
