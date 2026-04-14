@interface CRComponentSigning : NSObject

+ (id)sharedInstance;

- (void)bcrtSign:(struct __CFData { } *)a0 outSignature:(const struct __CFData **)a1 outDeviceNonce:(const struct __CFData **)a2 outError:(int *)a3;
- (void)prpcSign:(struct __CFData { } *)a0 outSignature:(const struct __CFData **)a1 outDeviceNonce:(const struct __CFData **)a2 outError:(int *)a3;
- (void)tcrtSign:(struct __CFData { } *)a0 outSignature:(const struct __CFData **)a1 outDeviceNonce:(const struct __CFData **)a2 outError:(int *)a3;
- (void)vcrtSign:(struct __CFData { } *)a0 outSignature:(const struct __CFData **)a1 outDeviceNonce:(const struct __CFData **)a2 outError:(int *)a3;

@end
