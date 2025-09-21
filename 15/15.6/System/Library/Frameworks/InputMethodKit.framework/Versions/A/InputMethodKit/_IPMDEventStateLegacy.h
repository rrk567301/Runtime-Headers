@interface _IPMDEventStateLegacy : NSObject {
    unsigned int _theEventClass;
    unsigned short _theEventKind;
    char _eventState;
}

- (char)eventState;
- (id)initWithClass:(unsigned int)a0 kind:(unsigned short)a1 state:(char)a2;
- (char)isEqual:(unsigned int)a0 Kind:(unsigned short)a1;
- (void)setEventState:(char)a0;
- (unsigned int)theEventClass;
- (unsigned short)theEventKind;

@end
