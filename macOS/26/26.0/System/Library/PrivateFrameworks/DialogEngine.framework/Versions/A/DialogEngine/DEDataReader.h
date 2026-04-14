@class NSData;

@interface DEDataReader : NSObject <DEReader>

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long dataOffset;

- (id)initWithData:(id)a0;
- (id)init;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)readData;
- (void)close;
- (void).cxx_destruct;

@end
