@interface QCNetworkPatch : QCThreadPatch {
    unsigned int _address;
    unsigned short _port;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (unsigned short)port;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)setPort:(unsigned short)a0;
- (unsigned int)address;
- (void)setAddress:(unsigned int)a0;

@end
