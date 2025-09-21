@class NSData;

@interface PQLNameInjectionBase : NSData {
    unsigned long long _length;
    char *_bytes;
}

@property (readonly, nonatomic) NSData *sql;

- (id)initWithData:(id)a0;
- (void)dealloc;
- (const void *)bytes;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;

@end
