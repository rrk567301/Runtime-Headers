@class NSData, HTTPConnection;

@interface WDHTTPAsyncDataResponse : NSObject <HTTPResponse> {
    HTTPConnection *_connection;
    NSData *_data;
    unsigned long long _readOffset;
}

- (unsigned long long)contentLength;
- (BOOL)isDone;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)isAsynchronous;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)connectionDidClose;
- (BOOL)delayResponseHeaders;
- (void)fulfillWithData:(id)a0 andStartResponse:(BOOL)a1;

@end
