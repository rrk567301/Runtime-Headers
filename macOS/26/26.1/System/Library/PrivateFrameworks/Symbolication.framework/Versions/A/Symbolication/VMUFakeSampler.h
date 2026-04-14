@class VMUProcessObjectGraph;

@interface VMUFakeSampler : VMUSampler {
    VMUProcessObjectGraph *_graph;
}

- (id)threadDescriptionStringForBacktrace:(id)a0 returnedAddress:(unsigned long long *)a1;
- (void).cxx_destruct;
- (id)initWithProcessObjectGraph:(id)a0;

@end
