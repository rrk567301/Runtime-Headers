@class VMUProcessObjectGraph;

@interface VMUFakeSampler : VMUSampler {
    VMUProcessObjectGraph *_graph;
}

- (void).cxx_destruct;
- (id)threadDescriptionStringForBacktrace:(id)a0 returnedAddress:(unsigned long long *)a1;
- (id)initWithProcessObjectGraph:(id)a0;

@end
