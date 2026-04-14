@class NSData, NSString;

@interface HLResponsePacket : NSObject

@property (retain, nonatomic) NSData *buffer;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL dump;

- (unsigned char)status;
- (void).cxx_destruct;
- (id)description;
- (void)debugLog:(unsigned char)a0;
- (id)initWithBuffer:(id)a0 reportName:(id)a1 dump:(BOOL)a2;
- (unsigned char)payloadByteAtOffset:(unsigned long long)a0;
- (id)payloadStringAtOffset:(unsigned long long)a0 length:(unsigned long long)a1;
- (unsigned short)payloadUInt16AtOffset:(unsigned long long)a0 bigEndian:(BOOL)a1;
- (unsigned int)payloadUInt32AtOffset:(unsigned long long)a0 bigEndian:(BOOL)a1;

@end
