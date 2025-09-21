@interface QCNetworkPatch : QCThreadPatch {
    unsigned int _address;
    unsigned short _port;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (void)setAddress:(unsigned int)a0;
- (BOOL)setState:(id)a0;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (void)setPort:(unsigned short)a0;
- (unsigned int)address;
- (unsigned short)port;

@end
