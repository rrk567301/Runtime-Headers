@interface ContactsUICore.CAProxyImage : NSObject <CARenderValue> {
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ colorSpace;
    void /* unknown type, empty encoding */ state;
}

- (void *)CA_copyRenderValue;
- (id)init;
- (void).cxx_destruct;
- (void *)CA_copyRenderValueWithColorspace:(struct CGColorSpace { } *)a0;

@end
