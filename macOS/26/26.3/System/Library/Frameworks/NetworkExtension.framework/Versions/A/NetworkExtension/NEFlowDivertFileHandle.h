@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (id)initFromDictionary:(id)a0;
- (unsigned long long)type;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)a0;
- (id)description;
- (id)initFlowDivertControlSocket;
- (id)dictionary;
- (void).cxx_destruct;
- (id)initFlowDivertDataSocket;
- (id)initFlowDivertControlSocketWithParams:(BOOL)a0 order:(int)a1;

@end
