@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)dictionary;
- (id)initFromDictionary:(id)a0;
- (id)initFlowDivertControlSocket;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)a0;
- (id)initFlowDivertDataSocket;

@end
