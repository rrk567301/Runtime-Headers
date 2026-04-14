@class NSString;

@interface NSKeyBinding : NSObject {
    Class _class;
    NSString *_key;
    void *_funcP;
}

+ (void)suppressCapitalizedKeyWarning;

- (id)key;
- (void)setKey:(id)a0;
- (void)dealloc;
- (Class)targetClass;

@end
