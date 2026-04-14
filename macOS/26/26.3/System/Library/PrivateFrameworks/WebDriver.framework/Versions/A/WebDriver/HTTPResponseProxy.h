@class NSObject;
@protocol HTTPResponse;

@interface HTTPResponseProxy : NSObject <HTTPResponse>

@property (retain, nonatomic) NSObject<HTTPResponse> *response;
@property (nonatomic) long long status;

- (id)readDataOfLength:(unsigned long long)a0;
- (void)setOffset:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (long long)customStatus;

@end
