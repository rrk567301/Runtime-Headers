@class NSArray;

@interface GTMTLReplayActivityCollectCounters : GTMTLReplayActivity {
    NSArray *_counterNames;
    unsigned long long _locations;
    unsigned long long _index;
}

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonObject;
- (void).cxx_destruct;
- (id)initWithCounters:(id)a0 statLocations:(unsigned long long)a1 index:(unsigned long long)a2;
- (unsigned int)messageSerial;
- (void)outputToLog:(id)a0;

@end
