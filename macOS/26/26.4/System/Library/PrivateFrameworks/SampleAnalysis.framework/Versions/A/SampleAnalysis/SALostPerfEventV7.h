@interface SALostPerfEventV7 : SALostPerfEvent {
    unsigned int _reason;
}

- (id)domain;
- (id)source;
- (id)type;
- (id)mode;
- (id)initWithStartTime:(id)a0 reason:(unsigned int)a1;
- (id)lostPerf;

@end
