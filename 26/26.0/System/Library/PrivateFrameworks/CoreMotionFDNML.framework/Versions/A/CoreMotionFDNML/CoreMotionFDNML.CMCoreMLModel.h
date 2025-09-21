@class NSError, _TtC15CoreMotionFDNML15CMWrappedArrays;

@interface CoreMotionFDNML.CMCoreMLModel : NSObject {
    void /* unknown type, empty encoding */ model_;
}

+ (id)fromName:(const char *)a0 error:(id *)a1;
+ (id)fromBundlePath:(const char *)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)predictAsyncFor:(_TtC15CoreMotionFDNML15CMWrappedArrays *)a0 completionHandler:(void (^)(_TtC15CoreMotionFDNML15CMWrappedArrays *, NSError *))a1;
- (id)predictFor:(id)a0 error:(id *)a1;

@end
