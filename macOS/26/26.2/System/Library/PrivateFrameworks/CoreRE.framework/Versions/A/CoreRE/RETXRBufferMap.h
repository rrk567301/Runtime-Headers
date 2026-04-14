@class NSString;

@interface RETXRBufferMap : NSObject <TXRBufferMap> {
    void *_buffer;
}

@property (readonly) unsigned long long size;
@property (readonly, nonatomic) void *bytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBuffer:(void *)a0 andSize:(unsigned long long)a1;

@end
