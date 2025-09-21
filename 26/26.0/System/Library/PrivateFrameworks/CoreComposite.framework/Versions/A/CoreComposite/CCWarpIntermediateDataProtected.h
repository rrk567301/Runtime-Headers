@class NSString, CCDRMServiceConnection;

@interface CCWarpIntermediateDataProtected : NSObject <CCVisitable> {
    CCDRMServiceConnection *_serviceConnection;
    unsigned long long _sharedTextureMapping;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initForOwner:(id)a0;
- (unsigned long long)mapTexture:(id)a0;
- (id)mapTextures:(id)a0 count:(unsigned long long)a1;
- (void)unmapTexture:(unsigned long long)a0;
- (void)unmapTextures:(id)a0;

@end
