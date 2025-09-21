@class NSData, HTTPConnection;

@interface WDHTTPAsyncDataResponse : NSObject <HTTPResponse> {
    HTTPConnection *_connection;
    NSData *_data;
    unsigned long long _readOffset;
}

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (char)isAsynchronous;
- (id)readDataOfLength:(unsigned long long)a0;
- (char)isDone;
- (unsigned long long)contentLength;
- (void)connectionDidClose;
- (char)delayResponseHeaders;
- (void)fulfillWithData:(id)a0 andStartResponse:(char)a1;

@end
