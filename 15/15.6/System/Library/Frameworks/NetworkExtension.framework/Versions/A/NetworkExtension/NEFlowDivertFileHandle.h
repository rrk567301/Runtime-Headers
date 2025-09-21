@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (id)description;
- (void).cxx_destruct;
- (id)dictionary;
- (unsigned long long)type;
- (id)initFlowDivertControlSocket;
- (id)initFlowDivertControlSocketDisableAppMap:(char)a0;
- (id)initFlowDivertControlSocketWithParams:(char)a0 order:(int)a1;
- (id)initFlowDivertDataSocket;
- (id)initFromDictionary:(id)a0;

@end
