@class NSString, NSMutableData;

@interface TXRDefaultBuffer : NSObject <TXRBuffer> {
    NSMutableData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)map;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1;
- (id)initWithLength:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 zone:(struct _NSZone { } *)a1;

@end
