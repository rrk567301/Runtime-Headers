@class NSMutableData, NSString;

@interface HLCommandPacket : NSObject

@property (retain, nonatomic) NSMutableData *buffer;
@property (nonatomic) unsigned char reportId;
@property (nonatomic) unsigned char majorCmd;
@property (nonatomic) unsigned char minorCmd;
@property (retain, nonatomic) NSString *name;

- (void).cxx_destruct;
- (void)debugLog;
- (id)assembledPacket;
- (id)initWithReportId:(unsigned char)a0 majorCmd:(unsigned char)a1 minorCmd:(unsigned char)a2 reportName:(id)a3;
- (id)reportBufferIncludeReportID:(BOOL)a0;
- (void)setPayloadByteAtOffset:(unsigned long long)a0 value:(unsigned char)a1;
- (void)setPayloadData:(id)a0 offset:(unsigned long long)a1;
- (void)setPayloadDataAtOffset:(unsigned long long)a0 data:(const char *)a1 length:(unsigned long long)a2;
- (void)setPayloadUInt16AtOffset:(unsigned long long)a0 value:(unsigned short)a1 bigEndian:(BOOL)a2;

@end
