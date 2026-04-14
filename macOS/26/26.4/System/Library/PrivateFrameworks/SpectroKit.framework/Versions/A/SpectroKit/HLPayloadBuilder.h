@class NSMutableData;

@interface HLPayloadBuilder : NSObject

@property (retain, nonatomic) NSMutableData *buffer;
@property (readonly, nonatomic) unsigned long long size;

- (id)initWithSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0;
- (void)setFloat:(float)a0 atOffset:(unsigned long long)a1 littleEndian:(BOOL)a2;
- (float)readFloatAtOffset:(unsigned long long)a0 littleEndian:(BOOL)a1;
- (float)readFloatAtOffset:(unsigned long long)a0;
- (id)readStringAtOffset:(unsigned long long)a0 maxLength:(unsigned long long)a1;
- (unsigned short)readUInt16AtOffset:(unsigned long long)a0;
- (unsigned short)readUInt16AtOffset:(unsigned long long)a0 littleEndian:(BOOL)a1;
- (unsigned int)readUInt32AtOffset:(unsigned long long)a0;
- (unsigned int)readUInt32AtOffset:(unsigned long long)a0 littleEndian:(BOOL)a1;
- (unsigned long long)readUInt64AtOffset:(unsigned long long)a0;
- (unsigned long long)readUInt64AtOffset:(unsigned long long)a0 littleEndian:(BOOL)a1;
- (unsigned char)readUInt8AtOffset:(unsigned long long)a0;
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
