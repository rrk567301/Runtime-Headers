@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (unsigned long long)type;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)a0;
- (id)dictionary;
- (id)initFlowDivertControlSocketWithParams:(BOOL)a0 order:(int)a1;
- (id)initFlowDivertDataSocket;
- (id)description;
- (void).cxx_destruct;
- (id)initFlowDivertControlSocket;
- (id)initFromDictionary:(id)a0;

@end
