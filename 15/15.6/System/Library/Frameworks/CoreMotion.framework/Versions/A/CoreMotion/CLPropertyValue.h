@interface CLPropertyValue : NSObject

@property (readonly, retain, nonatomic) id value;
@property (nonatomic) char dirty;

- (void)dealloc;
- (id)initWithValue:(id)a0 dirty:(char)a1;

@end
