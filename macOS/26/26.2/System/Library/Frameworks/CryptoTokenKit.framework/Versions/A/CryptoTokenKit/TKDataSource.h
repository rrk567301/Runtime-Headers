@class NSData;

@interface TKDataSource : NSObject {
    NSData *_data;
}

@property (readonly) const char *ptr;
@property (readonly) const char *end;
@property (readonly) NSData *data;

- (BOOL)bytesSafeToRead:(long long)a0;
- (id)initWithData:(id)a0;
- (id)fetchDataWithLength:(long long)a0;
- (id)dataFromPtr:(const char *)a0;
- (void).cxx_destruct;
- (unsigned char)fetchByte;

@end
