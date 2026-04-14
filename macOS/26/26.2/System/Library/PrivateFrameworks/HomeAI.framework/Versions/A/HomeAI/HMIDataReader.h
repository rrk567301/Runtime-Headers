@class NSData;

@interface HMIDataReader : NSObject {
    NSData *_data;
    unsigned long long _position;
}

- (id)initWithData:(id)a0;
- (unsigned int)readUInt32;
- (unsigned long long)readUInt64;
- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned long long)position;
- (id)readData:(unsigned long long)a0;
- (void)seek:(unsigned long long)a0;

@end
