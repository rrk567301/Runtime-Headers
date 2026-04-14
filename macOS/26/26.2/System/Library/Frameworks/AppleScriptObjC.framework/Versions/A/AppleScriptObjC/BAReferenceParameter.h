@class NSString;

@interface BAReferenceParameter : NSObject {
    void *_storage;
    NSString *_encoding;
    char _modifier;
}

- (void *)storage;
- (id)descriptor;
- (char)modifier;
- (void)dealloc;
- (id)initWithEncoding:(const char *)a0;
- (id)initWithEncoding:(const char *)a0 modifier:(char)a1;

@end
