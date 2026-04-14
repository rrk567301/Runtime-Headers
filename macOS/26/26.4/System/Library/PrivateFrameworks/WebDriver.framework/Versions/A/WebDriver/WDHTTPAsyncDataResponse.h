@class NSData, HTTPConnection;

@interface WDHTTPAsyncDataResponse : NSObject <HTTPResponse> {
    HTTPConnection *_connection;
    NSData *_data;
    unsigned long long _readOffset;
}

- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)isAsynchronous;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)contentLength;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)offset;
- (void)connectionDidClose;
- (BOOL)delayResponseHeaders;
- (void)fulfillWithData:(id)a0 andStartResponse:(BOOL)a1;

@end
