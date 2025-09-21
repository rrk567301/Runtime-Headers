@interface CoreMotionFDNML.CMFoundationModelResponse : NSObject {
    void /* unknown type, empty encoding */ response;
}

- (id)init;
- (id)errorMessage;
- (void).cxx_destruct;
- (void)dimensionOfArrayWithKey:(id)a0 dim:(char *)a1;
- (void)getMachContinuousTimestamp:(unsigned long long *)a0;
- (void)getType:(char *)a0;
- (id)resultKeys;
- (void)shapeOfArrayWithKey:(id)a0 shape:(unsigned int *)a1 expectedShapeSize:(unsigned char)a2;
- (void)typeOfArrayWithKey:(id)a0 type:(char *)a1;
- (void)writeBytesWithKey:(id)a0 ptr:(char *)a1 expectedByteLength:(unsigned long long)a2;

@end
