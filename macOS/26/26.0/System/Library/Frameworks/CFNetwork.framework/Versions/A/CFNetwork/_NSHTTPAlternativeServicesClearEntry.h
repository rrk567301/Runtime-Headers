@class NSString;

@interface _NSHTTPAlternativeServicesClearEntry : NSObject {
    NSString *_host;
    NSString *_partition;
    long long _port;
    long long _serviceType;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
