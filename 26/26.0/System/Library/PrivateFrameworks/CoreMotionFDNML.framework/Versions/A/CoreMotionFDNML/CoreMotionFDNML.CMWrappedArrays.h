@interface CoreMotionFDNML.CMWrappedArrays : NSObject {
    void /* unknown type, empty encoding */ arrays;
}

- (id)keys;
- (id)init;
- (void).cxx_destruct;
- (void)addArrayWithName:(const char *)a0 type:(unsigned char)a1 shape:(const unsigned int *)a2 dimensions:(unsigned char)a3 byteArray:(const char *)a4 byteLength:(unsigned long long)a5;
- (void)dimensionOfArrayWithKey:(id)a0 dim:(char *)a1;
- (void)shapeOfArrayWithKey:(id)a0 shape:(unsigned int *)a1 expectedShapeSize:(unsigned char)a2;
- (void)typeOfArrayWithKey:(id)a0 type:(char *)a1;
- (void)writeBytesWithKey:(id)a0 ptr:(char *)a1 expectedByteLength:(unsigned long long)a2;

@end
