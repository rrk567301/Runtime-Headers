@class NSObject;
@protocol HTTPResponse;

@interface HTTPResponseProxy : NSObject <HTTPResponse>

@property (retain, nonatomic) NSObject<HTTPResponse> *response;
@property (nonatomic) long long status;

- (unsigned long long)contentLength;
- (BOOL)isDone;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)setOffset:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)offset;
- (long long)customStatus;

@end
