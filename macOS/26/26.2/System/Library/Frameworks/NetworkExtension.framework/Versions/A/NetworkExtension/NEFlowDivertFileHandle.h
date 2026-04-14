@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (id)dictionary;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initFlowDivertControlSocket;
- (id)description;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)a0;
- (id)initFlowDivertDataSocket;
- (id)initFromDictionary:(id)a0;
- (id)initFlowDivertControlSocketWithParams:(BOOL)a0 order:(int)a1;

@end
