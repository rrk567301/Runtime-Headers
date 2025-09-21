@interface NetworkInfo.NetworkInfoURLRetrievalResult : NSObject {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ statusCode;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ totalTime;
    void /* unknown type, empty encoding */ fetchStart;
    void /* unknown type, empty encoding */ domainLookupStart;
    void /* unknown type, empty encoding */ domainLookupEnd;
    void /* unknown type, empty encoding */ connectStart;
    void /* unknown type, empty encoding */ secureConnectionStart;
    void /* unknown type, empty encoding */ secureConnectionEnd;
    void /* unknown type, empty encoding */ connectEnd;
    void /* unknown type, empty encoding */ requestStart;
    void /* unknown type, empty encoding */ requestEnd;
    void /* unknown type, empty encoding */ responseStart;
    void /* unknown type, empty encoding */ responseEnd;
    void /* unknown type, empty encoding */ networkProtocolName;
    void /* unknown type, empty encoding */ localAddress;
    void /* unknown type, empty encoding */ remoteAddress;
    void /* unknown type, empty encoding */ countOfResponseBodyBytesReceived;
    void /* unknown type, empty encoding */ countOfResponseBodyBytesAfterDecoding;
}

- (id)init;
- (void).cxx_destruct;

@end
