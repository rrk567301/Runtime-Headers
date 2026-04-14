@protocol CRGPort;

@interface CRGDerivedPixelFormat : CRGPixelFormat {
    id<CRGPort> _port;
}

+ (id)fromPort:(id)a0;

- (id)initWithPort:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)asDerived;

@end
