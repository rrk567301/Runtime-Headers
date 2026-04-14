@class NSString;

@interface BAReferenceParameter : NSObject {
    void *_storage;
    NSString *_encoding;
    char _modifier;
}

- (void *)storage;
- (char)modifier;
- (id)descriptor;
- (void)dealloc;
- (id)initWithEncoding:(const char *)a0;
- (id)initWithEncoding:(const char *)a0 modifier:(char)a1;

@end
