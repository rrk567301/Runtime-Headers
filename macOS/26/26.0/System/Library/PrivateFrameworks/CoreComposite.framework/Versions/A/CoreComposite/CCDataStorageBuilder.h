@class NSMutableSet, NSMutableDictionary;

@interface CCDataStorageBuilder : CCPartialVisitor

@property (retain, nonatomic) NSMutableSet *bufferKeys;
@property (retain, nonatomic) NSMutableSet *textureKeys;
@property (retain, nonatomic) NSMutableSet *bufferArrayKeys;
@property (retain, nonatomic) NSMutableSet *textureArrayKeys;
@property (retain, nonatomic) NSMutableDictionary *bufferStorage;
@property (retain, nonatomic) NSMutableDictionary *textureStorage;

- (id)init;
- (void).cxx_destruct;
- (void)_checkBufferStorage;
- (void)_checkTextureStorage;
- (void)addBufferArrayKey:(id)a0;
- (void)addBufferKey:(id)a0;
- (void)addTextureArrayKey:(id)a0;
- (void)addTextureKey:(id)a0;
- (void)visit:(id)a0 name:(id)a1;
- (void)visitBuffer:(id)a0 name:(id)a1;
- (void)visitBufferArray:(id)a0 name:(id)a1;
- (void)visitCArray:(const id *)a0 length:(unsigned long long)a1 name:(id)a2;
- (void)visitDepthTexture:(id)a0 name:(id)a1;
- (void)visitDisplayToTanAngleTexture:(id)a0 name:(id)a1;
- (void)visitTanAngleToPixelTexture:(id)a0 name:(id)a1;
- (void)visitTexture:(id)a0 colorSpace:(long long)a1 format:(unsigned long long)a2 name:(id)a3;
- (void)visitTextureArray:(id)a0 colorSpace:(long long)a1 format:(unsigned long long)a2 name:(id)a3;

@end
