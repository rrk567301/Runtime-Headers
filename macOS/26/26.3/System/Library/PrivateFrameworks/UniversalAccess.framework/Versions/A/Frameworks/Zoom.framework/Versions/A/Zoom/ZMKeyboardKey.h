@class NSString;

@interface ZMKeyboardKey : NSObject <NSCopying>

@property (nonatomic) unsigned long long keyCode;
@property (retain, nonatomic) NSString *charString;
@property (nonatomic) unsigned long long flags;

+ (void)initialize;

- (SEL)selector;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0;
- (id)initWithKeyCode:(unsigned long long)a0 flags:(unsigned long long)a1;
- (id)initWithString:(id)a0 flags:(unsigned long long)a1;

@end
