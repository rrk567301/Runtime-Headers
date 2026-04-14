@class NSData;

@interface TKDataSource : NSObject {
    NSData *_data;
}

@property (readonly) const char *ptr;
@property (readonly) const char *end;
@property (readonly) NSData *data;

- (id)fetchDataWithLength:(long long)a0;
- (BOOL)fetchByte:(char *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)dataFromPtr:(const char *)a0;
- (BOOL)bytesSafeToRead:(long long)a0;
- (unsigned char)fetchByte;

@end
