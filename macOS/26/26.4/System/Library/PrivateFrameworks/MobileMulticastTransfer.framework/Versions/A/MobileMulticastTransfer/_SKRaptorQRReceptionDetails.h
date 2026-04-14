@interface _SKRaptorQRReceptionDetails : NSObject {
    unsigned int _firstESI;
    unsigned int _lastESI;
    unsigned int _largestESI;
}

- (id)init;
- (unsigned int)symbolsShouldHaveReceived:(unsigned long long)a0;
- (void)updateWithESI:(unsigned int)a0;

@end
