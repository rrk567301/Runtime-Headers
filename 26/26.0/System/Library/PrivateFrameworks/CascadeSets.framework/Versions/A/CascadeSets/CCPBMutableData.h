@interface CCPBMutableData : NSMutableData {
    char *p;
    char *buffer;
    char *end;
}

- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (void)dealloc;
- (const void *)bytes;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)length;

@end
