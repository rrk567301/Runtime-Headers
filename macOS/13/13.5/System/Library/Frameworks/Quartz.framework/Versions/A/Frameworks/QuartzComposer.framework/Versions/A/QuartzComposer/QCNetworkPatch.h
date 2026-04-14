@interface QCNetworkPatch : QCThreadPatch {
    unsigned int _address;
    unsigned short _port;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (unsigned short)port;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (unsigned int)address;
- (void)setPort:(unsigned short)a0;
- (void)setAddress:(unsigned int)a0;

@end
