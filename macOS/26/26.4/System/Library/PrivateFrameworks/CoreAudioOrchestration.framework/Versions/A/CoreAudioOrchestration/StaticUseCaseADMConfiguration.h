@class NSArray, NSNumber, ExclaveAudioFormatBase;

@interface StaticUseCaseADMConfiguration : NSObject {
    void /* unknown type, empty encoding */ admConfigs;
    void /* unknown type, empty encoding */ useCaseID;
    void /* unknown type, empty encoding */ exclaveFormat;
}

@property (nonatomic, readonly) NSArray *negotiateDictionaries;
@property (nonatomic, readonly) NSArray *adaptDictionaries;
@property (nonatomic, readonly) NSNumber *frameBufferSize;
@property (nonatomic, readonly) ExclaveAudioFormatBase *exclaveAudioFormat;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUseCaseID:(unsigned int)a0;
- (id)initWithUseCaseID:(unsigned int)a0 andDeviceTreeInfo:(id)a1;

@end
