@class NSObject;
@protocol HTTPResponse;

@interface HTTPResponseProxy : NSObject <HTTPResponse>

@property (retain, nonatomic) NSObject<HTTPResponse> *response;
@property (nonatomic) long long status;

- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)contentLength;
- (void)forwardInvocation:(id)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)offset;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (long long)customStatus;

@end
