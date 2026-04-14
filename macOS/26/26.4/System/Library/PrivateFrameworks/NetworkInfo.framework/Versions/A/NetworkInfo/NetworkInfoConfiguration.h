@interface NetworkInfoConfiguration : NSObject {
    void /* unknown type, empty encoding */ domains;
    void /* unknown type, empty encoding */ dnsOnlyDomains;
    void /* unknown type, empty encoding */ urls;
    void /* unknown type, empty encoding */ extraURLs;
    void /* unknown type, empty encoding */ tcpProbedHosts;
    void /* unknown type, empty encoding */ disablePacketCapture;
    void /* unknown type, empty encoding */ disableRaisingLogLevels;
    void /* unknown type, empty encoding */ enableNetworkSnapshot;
    void /* unknown type, empty encoding */ workingDir;
}

- (void).cxx_destruct;
- (id)init;

@end
