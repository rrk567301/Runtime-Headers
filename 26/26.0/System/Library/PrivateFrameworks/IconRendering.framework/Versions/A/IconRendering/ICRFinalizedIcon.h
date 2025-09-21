@class NSData, NSError;

@interface ICRFinalizedIcon : NSObject {
    void /* unknown type, empty encoding */ finalizedIcon;
}

- (unsigned long long)layoutDirection;
- (void).cxx_destruct;
- (id)initFromSerializedData:(id)a0 device:(id)a1 error:(id *)a2;
- (struct CGImage { } *)renderedIconWithConfiguration:(id)a0;
- (id)serializedDataWithError:(id *)a0;
- (struct CGImage { } *)renderedFullBleedIconWithConfiguration:(id)a0 excludeChicletSpecularHighlights:(BOOL)a1;
- (struct CGImage { } *)renderedLegacyCompatibleIconWithConfiguration:(id)a0 forDeviceClass:(long long)a1 maskToIconShape:(BOOL)a2;
- (struct CGImage { } *)renderedSystemGlassCompatibleIconWithConfiguration:(id)a0;
- (struct CGImage { } *)renderedLegacyCompatibleIconWithConfiguration:(id)a0 forDeviceClass:(long long)a1;
- (struct CGImage { } *)renderedFullBleedIconWithConfiguration:(id)a0;
- (void)serializedDataWithCompletionHandler:(void (^)(NSData *, NSError *))a0;

@end
