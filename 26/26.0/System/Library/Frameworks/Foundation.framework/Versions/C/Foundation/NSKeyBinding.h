@class NSString;

@interface NSKeyBinding : NSObject {
    Class _class;
    NSString *_key;
    void *_funcP;
}

+ (void)suppressCapitalizedKeyWarning;

- (void)dealloc;
- (void)setKey:(id)a0;
- (id)key;
- (Class)targetClass;

@end
