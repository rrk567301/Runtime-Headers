@class GCHIDServiceInfo;

@interface _GCHIDServiceAuditor : NSObject {
    unsigned long long _receivedEventCount;
    unsigned long long _publishedEventCount;
    struct { unsigned long long eventTimestampMAT; } _latestReceivedEvents[5];
    GCHIDServiceInfo *_serviceInfo;
}

- (void).cxx_destruct;
- (id)initWithServiceInfo:(id)a0;

@end
