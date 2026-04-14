@interface CCPBMutableData : NSMutableData {
    char *p;
    char *buffer;
    char *end;
}

- (void *)mutableBytes;
- (const void *)bytes;
- (unsigned long long)length;
- (void)setLength:(unsigned long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
