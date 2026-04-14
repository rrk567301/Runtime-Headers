@class NSMutableData, NSMutableString;

@interface SecureMemoryIndexDataBridge : NSObject

@property (retain, nonatomic) NSMutableString *name;
@property (retain, nonatomic) NSMutableData *data;
@property (readonly, nonatomic) unsigned long long indexDataLength;

- (void).cxx_destruct;
- (unsigned long long)dataLength;
- (const char *)nameString;
- (const void *)dataInBytes;
- (id)initWithIndexName:(id)a0 data:(id)a1 dataLength:(unsigned long long)a2;

@end
