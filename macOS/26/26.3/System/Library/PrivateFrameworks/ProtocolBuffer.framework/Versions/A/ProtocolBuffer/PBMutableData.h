@interface PBMutableData : NSMutableData {
    char *p;
    char *buffer;
    char *end;
}

- (void)setLength:(unsigned long long)a0;
- (const void *)bytes;
- (unsigned long long)length;
- (void *)mutableBytes;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
