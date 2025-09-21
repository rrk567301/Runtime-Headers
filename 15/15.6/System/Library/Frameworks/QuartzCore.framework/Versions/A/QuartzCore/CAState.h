@class NSString, NSArray, NSMutableArray;

@interface CAState : NSObject <NSSecureCoding, NSCopying> {
    NSMutableArray *_elements;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy) NSString *basedOn;
@property (getter=isEnabled) char enabled;
@property (copy, nonatomic) NSArray *elements;
@property double nextDelay;
@property double previousDelay;
@property (nonatomic, getter=isLocked) char locked;
@property (getter=isInitial) char initial;

+ (void)CAMLParserStartElement:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addElement:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)foreachLayer:(id /* block */)a0;
- (void)removeElement:(id)a0;

@end
