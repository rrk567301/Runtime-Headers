@interface IPMDEventState : NSObject {
    unsigned int _theEventClass;
    unsigned short _theEventKind;
    BOOL _eventState;
}

- (id)initWithClass:(unsigned int)a0 kind:(unsigned short)a1 state:(BOOL)a2;
- (BOOL)eventState;
- (void)setEventState:(BOOL)a0;
- (unsigned int)theEventClass;
- (unsigned short)theEventKind;
- (BOOL)isEqual:(unsigned int)a0 Kind:(unsigned short)a1;

@end
