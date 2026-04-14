@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (id)initGuardProxyFlowDivertControlSocket;
- (id)initFlowDivertControlSocket;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initFromDictionary:(id)a0;
- (id)initFlowDivertControlSocketWithParams:(BOOL)a0 isGuardProxy:(BOOL)a1 order:(int)a2;
- (id)description;
- (id)initFlowDivertDataSocket;
- (id)dictionary;

@end
