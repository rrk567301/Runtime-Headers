@class NSDictionary;

@interface ARStreamingInProcessDaemonConfiguration : ARInProcessDaemonConfiguration {
    NSDictionary *_deviceIDToLoopbackPort;
}

- (void).cxx_destruct;
- (id)deviceIDToLoopbackPort;
- (id)initWithLoopbackPorts:(id)a0;

@end
