@class NSMutableData, NSObject;
@protocol OS_dispatch_group;

@interface UVCDataBuffer : NSObject {
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly) NSMutableData *data;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 group:(id)a2;

@end
