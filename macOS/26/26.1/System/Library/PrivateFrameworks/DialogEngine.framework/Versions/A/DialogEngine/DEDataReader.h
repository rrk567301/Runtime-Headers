@class NSData;

@interface DEDataReader : NSObject <DEReader>

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long dataOffset;

- (id)initWithData:(id)a0;
- (id)readData;
- (void)close;
- (id)readDataOfLength:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
