@class NSData;

@interface DEDataReader : NSObject <DEReader>

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long dataOffset;

- (id)readDataOfLength:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)readData;
- (id)init;
- (void)close;

@end
