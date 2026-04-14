@class NSString;

@interface NSKeyBinding : NSObject {
    Class _class;
    NSString *_key;
    void *_funcP;
}

+ (void)suppressCapitalizedKeyWarning;

- (id)key;
- (Class)targetClass;
- (void)setKey:(id)a0;
- (void)dealloc;

@end
