@class NSString, NSArray;

@interface CAStateTransition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fromState;
@property (copy, nonatomic) NSString *toState;
@property (copy, nonatomic) NSArray *elements;

+ (void)CAMLParserStartElement:(id)a0;

- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (id)init;
- (id)CAMLTypeForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)duration;

@end
