@interface VIBitVector : NSObject {
    char *_data;
    unsigned long long _numberOfBytes;
    unsigned long long _bitShift;
}

@property (readonly) unsigned long long numberOfBits;

- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)data;
- (id)initWithNumberOfBits:(unsigned long long)a0;
- (void)setAtIndex:(unsigned long long)a0;
- (BOOL)checkAtIndex:(unsigned long long)a0;
- (void)clearAtIndex:(unsigned long long)a0;

@end
