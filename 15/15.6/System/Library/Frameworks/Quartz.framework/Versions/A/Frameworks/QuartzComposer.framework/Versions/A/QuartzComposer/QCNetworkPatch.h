@interface QCNetworkPatch : QCThreadPatch {
    unsigned int _address;
    unsigned short _port;
}

+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (unsigned short)port;
- (void)setPort:(unsigned short)a0;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (unsigned int)address;
- (void)setAddress:(unsigned int)a0;

@end
