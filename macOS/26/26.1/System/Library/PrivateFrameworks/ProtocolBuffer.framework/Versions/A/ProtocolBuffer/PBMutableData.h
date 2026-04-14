@interface PBMutableData : NSMutableData {
    char *p;
    char *buffer;
    char *end;
}

- (id)initWithCapacity:(unsigned long long)a0;
- (const void *)bytes;
- (void)setLength:(unsigned long long)a0;
- (void *)mutableBytes;
- (unsigned long long)length;
- (void)dealloc;

@end
