@class NSMutableData;

@interface BinaryParser : NSObject

@property (readonly, nonatomic) NSMutableData *buffer;

- (id)getData;
- (id)initWithSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBuffer:(id)a0;
- (unsigned short)getUInt16AtOffset:(unsigned long long)a0 littleEndian:(BOOL)a1;
- (unsigned long long)getUInt64AtOffset:(unsigned long long)a0 littleEndian:(BOOL)a1;
- (void)setFloat:(float)a0 atOffset:(unsigned long long)a1 littleEndian:(BOOL)a2;
- (double)getDoubleAtOffset:(unsigned long long)a0 littleEndian:(BOOL)a1;
- (unsigned int)getUInt32AtOffset:(unsigned long long)a0 littleEndian:(BOOL)a1;
- (float)getFloatAtOffset:(unsigned long long)a0;
- (float)getFloatAtOffset:(unsigned long long)a0 littleEndian:(BOOL)a1;
- (id)getStringAtOffset:(unsigned long long)a0 maxLength:(unsigned long long)a1;
- (unsigned short)getUInt16AtOffset:(unsigned long long)a0;
- (unsigned int)getUInt32AtOffset:(unsigned long long)a0;
- (unsigned long long)getUInt64AtOffset:(unsigned long long)a0;
- (unsigned char)getUInt8AtOffset:(unsigned long long)a0;
- (void)setFloat:(float)a0 atOffset:(unsigned long long)a1;
- (void)setString:(id)a0 atOffset:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)setUInt16:(unsigned short)a0 atOffset:(unsigned long long)a1;
- (void)setUInt16:(unsigned short)a0 atOffset:(unsigned long long)a1 littleEndian:(BOOL)a2;
- (void)setUInt32:(unsigned int)a0 atOffset:(unsigned long long)a1;
- (void)setUInt32:(unsigned int)a0 atOffset:(unsigned long long)a1 littleEndian:(BOOL)a2;
- (void)setUInt64:(unsigned long long)a0 atOffset:(unsigned long long)a1;
- (void)setUInt64:(unsigned long long)a0 atOffset:(unsigned long long)a1 littleEndian:(BOOL)a2;
- (void)setUInt8:(unsigned char)a0 atOffset:(unsigned long long)a1;

@end
