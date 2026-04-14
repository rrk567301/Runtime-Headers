@interface CoreMotionFDNML.CMFoundationModelRequest : NSObject {
    void /* unknown type, empty encoding */ request;
}

- (void)setModelName:(const char *)a0;
- (void)setTimestamp:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addArrayWithName:(const char *)a0 type:(unsigned char)a1 shape:(const unsigned int *)a2 dimensions:(unsigned char)a3 byteArray:(const char *)a4 byteLength:(unsigned long long)a5;

@end
