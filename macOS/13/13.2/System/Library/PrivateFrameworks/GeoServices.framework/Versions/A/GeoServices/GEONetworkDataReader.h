@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
    NSMutableData *_data;
    unsigned long long _dataLength;
    const void *_bytes;
    unsigned long long _bookmarkOffset;
    unsigned long long _offset;
}

- (void)dealloc;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)readString;
- (id)allData;
- (void)appendNetworkData:(id)a0;
- (BOOL)readUnsignedShort:(unsigned short *)a0;
- (BOOL)readUnsignedInt:(unsigned int *)a0;
- (id)readData:(unsigned int)a0;
- (void)markOffset;
- (void)seekToMarkedOffset;
- (BOOL)hasUnreadData;

@end
