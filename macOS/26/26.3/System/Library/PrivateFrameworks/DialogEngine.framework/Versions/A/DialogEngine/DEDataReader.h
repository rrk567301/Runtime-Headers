@class NSData;

@interface DEDataReader : NSObject <DEReader>

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long dataOffset;

- (id)readDataOfLength:(unsigned long long)a0;
- (void)close;
- (id)initWithData:(id)a0;
- (id)init;
- (id)readData;
- (void).cxx_destruct;

@end
