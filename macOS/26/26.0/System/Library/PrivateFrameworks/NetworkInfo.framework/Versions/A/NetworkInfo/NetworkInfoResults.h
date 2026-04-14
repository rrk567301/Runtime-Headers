@interface NetworkInfoResults : NSObject {
    void /* unknown type, empty encoding */ systemConfiguration;
    void /* unknown type, empty encoding */ dnsResults;
    void /* unknown type, empty encoding */ pings;
    void /* unknown type, empty encoding */ httpFetches;
    void /* unknown type, empty encoding */ traceroutes;
    void /* unknown type, empty encoding */ tcpConnects;
    void /* unknown type, empty encoding */ packetCaptureFilename;
    void /* unknown type, empty encoding */ droptapCaptureFilename;
}

- (id)init;
- (void).cxx_destruct;

@end
