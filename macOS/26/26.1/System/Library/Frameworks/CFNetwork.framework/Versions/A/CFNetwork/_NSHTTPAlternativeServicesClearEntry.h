@class NSString;

@interface _NSHTTPAlternativeServicesClearEntry : NSObject {
    NSString *_host;
    NSString *_partition;
    long long _port;
    long long _serviceType;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
