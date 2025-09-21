@class BSServiceConnection;
@protocol BSServiceConnectionHost, ECAuthenticationKey, NSObject, CPXRemoteViewEventManagerConfig;

@interface _CPXViewClient : NSObject {
    int _pid;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    id<CPXRemoteViewEventManagerConfig> _config;
    id<NSObject, ECAuthenticationKey> _signingKey;
    unsigned long long _mostRecentEventTime;
}

- (void).cxx_destruct;

@end
