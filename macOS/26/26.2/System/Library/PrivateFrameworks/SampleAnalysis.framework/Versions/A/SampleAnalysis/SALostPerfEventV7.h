@interface SALostPerfEventV7 : SALostPerfEvent {
    unsigned int _reason;
}

- (id)source;
- (id)domain;
- (id)type;
- (id)mode;
- (id)initWithStartTime:(id)a0 reason:(unsigned int)a1;
- (id)lostPerf;

@end
