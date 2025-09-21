@class NSString, NSMutableDictionary;

@interface ABPKMLNetworkV2 : NSObject {
    struct e5rt_execution_stream_operation { } *_operation;
    struct e5rt_execution_stream { } *_stream;
    NSString *_networkPath;
    char _useSurface;
}

@property (readonly, nonatomic) NSMutableDictionary *inputBuffers;
@property (readonly, nonatomic) NSMutableDictionary *outputBuffers;

- (void)dealloc;
- (void).cxx_destruct;
- (char)execute;
- (char)changeNetWorkConfig:(id)a0;
- (id)initWithNetworkPath:(id)a0 inputNames:(id)a1 outputNames:(id)a2 useSurface:(char)a3;
- (id)initWithNetworkPath:(id)a0 networkConfig:(id)a1 inputNames:(id)a2 outputNames:(id)a3 useSurface:(char)a4;

@end
