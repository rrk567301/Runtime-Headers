@interface ContactsUICore.CAProxyImage : NSObject <CARenderValue> {
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ colorSpace;
    void /* unknown type, empty encoding */ state;
}

- (void *)CA_copyRenderValue;
- (void).cxx_destruct;
- (id)init;
- (void *)CA_copyRenderValueWithColorspace:(struct CGColorSpace { } *)a0;

@end
