@class NSString;

@interface NSKeyBinding : NSObject {
    Class _class;
    NSString *_key;
    void *_funcP;
}

+ (void)suppressCapitalizedKeyWarning;

- (id)key;
- (void)dealloc;
- (void)setKey:(id)a0;
- (Class)targetClass;

@end
