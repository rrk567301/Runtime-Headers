@class HAPAccessoryServerIP;

@interface HAPAccessoryServerBrowserInvalidateServerOperation : HAP2AsynchronousOperation

@property (retain, nonatomic) HAPAccessoryServerIP *server;

- (void)main;
- (id)initWithServer:(id)a0;
- (void).cxx_destruct;

@end
