@class NSString;

@interface NENetworkAgentSessionFileHandle : NEFileHandle {
    NSString *_name;
}

@property (readonly) NSString *name;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNetworkAgentSession:(id)a0;
- (id)initWithNetworkAgentSession:(id)a0 name:(id)a1;

@end
