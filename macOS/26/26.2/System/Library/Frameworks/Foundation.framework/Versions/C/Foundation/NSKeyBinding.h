@class NSString;

@interface NSKeyBinding : NSObject {
    Class _class;
    NSString *_key;
    void *_funcP;
}

+ (void)suppressCapitalizedKeyWarning;

- (Class)targetClass;
- (void)setKey:(id)a0;
- (id)key;
- (void)dealloc;

@end
