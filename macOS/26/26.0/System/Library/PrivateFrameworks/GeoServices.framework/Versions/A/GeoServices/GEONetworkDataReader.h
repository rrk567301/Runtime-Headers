@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
    NSMutableData *_data;
    unsigned long long _dataLength;
    const void *_bytes;
    unsigned long long _bookmarkOffset;
    unsigned long long _offset;
}

- (id)initWithData:(id)a0;
- (id)allData;
- (void)dealloc;
- (id)readString;
- (void).cxx_destruct;
- (void)appendNetworkData:(id)a0;
- (BOOL)hasUnreadData;
- (void)markOffset;
- (id)readData:(unsigned int)a0;
- (BOOL)readUnsignedInt:(unsigned int *)a0;
- (BOOL)readUnsignedShort:(unsigned short *)a0;
- (void)seekToMarkedOffset;

@end
