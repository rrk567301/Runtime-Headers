@protocol CRGPort;

@interface CRGDerivedDimensions : CRGDimensions {
    id<CRGPort> _port;
    void /* unknown type, empty encoding */ _scale;
}

+ (id)fromPort:(id)a0;
+ (id)fromPort:(SEL)a0 withScale:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)asDerived;
- (id)initWithPort:(SEL)a0 withScale:(id)a1;

@end
