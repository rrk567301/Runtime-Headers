@class NSNumber;

@interface MADUserSafetyQRCodeDetector : NSObject

@property (retain) NSNumber *sensitivity;

+ (BOOL)enabled;
+ (id)nudityURLString;
+ (id)goreViolenceURLString;
+ (id)goreViolenceURLStringLegacy;
+ (id)nudityAndGoreViolenceURLString;
+ (id)nudityURLStringLegacy;

- (void).cxx_destruct;
- (id)init;
- (void)processPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 signpostPayload:(id)a2;

@end
