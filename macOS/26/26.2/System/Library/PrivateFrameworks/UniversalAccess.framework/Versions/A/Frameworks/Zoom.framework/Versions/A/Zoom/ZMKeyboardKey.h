@class NSString;

@interface ZMKeyboardKey : NSObject <NSCopying>

@property (nonatomic) unsigned long long keyCode;
@property (retain, nonatomic) NSString *charString;
@property (nonatomic) unsigned long long flags;

+ (void)initialize;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (SEL)selector;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0;
- (id)initWithKeyCode:(unsigned long long)a0 flags:(unsigned long long)a1;
- (id)initWithString:(id)a0 flags:(unsigned long long)a1;

@end
