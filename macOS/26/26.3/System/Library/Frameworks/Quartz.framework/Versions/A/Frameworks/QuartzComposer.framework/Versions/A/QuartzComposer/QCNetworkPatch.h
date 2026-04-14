@interface QCNetworkPatch : QCThreadPatch {
    unsigned int _address;
    unsigned short _port;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (void)setAddress:(unsigned int)a0;
- (void)setPort:(unsigned short)a0;
- (id)initWithIdentifier:(id)a0;
- (unsigned short)port;
- (unsigned int)address;
- (id)state;
- (BOOL)setState:(id)a0;

@end
