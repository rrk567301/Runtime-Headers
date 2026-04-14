@interface SALostPerfEventV7 : SALostPerfEvent {
    unsigned int _reason;
}

- (id)type;
- (id)source;
- (id)mode;
- (id)domain;
- (id)initWithStartTime:(id)a0 reason:(unsigned int)a1;
- (id)lostPerf;

@end
