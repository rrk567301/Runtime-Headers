@class NSArray, NSMutableDictionary;

@interface VisionCoreE5RTExecutionBoundPorts : NSObject {
    NSMutableDictionary *_namedPorts;
}

@property (readonly, copy, nonatomic) NSArray *allPortNames;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)releaseAllPorts;
- (char)getPort:(struct e5rt_io_port **)a0 named:(id)a1 error:(id *)a2;
- (char)recordPort:(struct e5rt_io_port { } *)a0 named:(id)a1 error:(id *)a2;
- (void)releasePortNamed:(id)a0;

@end
