@class NSData, NSFileHandle;

@interface HTTPData : NSObject

@property (retain) NSFileHandle *file;
@property unsigned long long offset;
@property unsigned long long length;
@property (retain) NSData *data;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithSendfile:(id)a0 offset:(long long)a1 length:(long long)a2;

@end
