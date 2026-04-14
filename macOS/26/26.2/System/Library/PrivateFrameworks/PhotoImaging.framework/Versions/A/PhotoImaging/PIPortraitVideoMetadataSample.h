@class NSString, PTTimedRenderingMetadata;

@interface PIPortraitVideoMetadataSample : NSObject {
    unsigned long long _dataDigest;
}

@property (class, readonly, nonatomic) NSString *renderingMetadataIdentifier;

@property (retain, nonatomic) PTTimedRenderingMetadata *timedMetadata;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)CIImageProcessorDigestObject;
- (void)nu_updateDigest:(id)a0;
- (void)applyToRenderRequest:(id)a0;
- (id)initWithMetadataGroup:(id)a0 majorVersion:(unsigned int)a1 minorVersion:(unsigned int)a2 error:(out id *)a3;
- (BOOL)isEqualToPIPortraitVideoMetadataSample:(id)a0;
- (id)valueWithIdentifier:(id)a0 inGroup:(id)a1 ofClass:(Class)a2;

@end
