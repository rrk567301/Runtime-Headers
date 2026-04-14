@class NSObject;
@protocol HTTPResponse;

@interface HTTPResponseProxy : NSObject <HTTPResponse>

@property (retain, nonatomic) NSObject<HTTPResponse> *response;
@property (nonatomic) long long status;

- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)contentLength;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)offset;
- (long long)customStatus;

@end
