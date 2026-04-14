@interface SALostPerfEventV7 : SALostPerfEvent {
    unsigned int _reason;
}

- (id)type;
- (id)source;
- (id)domain;
- (id)mode;
- (id)initWithStartTime:(id)a0 reason:(unsigned int)a1;
- (id)lostPerf;

@end
