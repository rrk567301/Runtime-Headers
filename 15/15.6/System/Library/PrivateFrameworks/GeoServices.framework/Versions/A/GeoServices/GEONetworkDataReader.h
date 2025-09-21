@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
    NSMutableData *_data;
    unsigned long long _dataLength;
    const void *_bytes;
    unsigned long long _bookmarkOffset;
    unsigned long long _offset;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)readString;
- (id)allData;
- (void)appendNetworkData:(id)a0;
- (char)hasUnreadData;
- (void)markOffset;
- (id)readData:(unsigned int)a0;
- (char)readUnsignedInt:(unsigned int *)a0;
- (char)readUnsignedShort:(unsigned short *)a0;
- (void)seekToMarkedOffset;

@end
