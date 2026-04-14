@class NSData, HTTPConnection;

@interface WDHTTPAsyncDataResponse : NSObject <HTTPResponse> {
    HTTPConnection *_connection;
    NSData *_data;
    unsigned long long _readOffset;
}

- (BOOL)isAsynchronous;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (id)initWithConnection:(id)a0;
- (unsigned long long)contentLength;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (void)connectionDidClose;
- (BOOL)delayResponseHeaders;
- (void)fulfillWithData:(id)a0 andStartResponse:(BOOL)a1;

@end
