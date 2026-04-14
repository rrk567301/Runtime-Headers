@class NSSet, NSMutableDictionary;

@interface BAMetadataManager : NSObject

@property (readonly, retain) NSMutableDictionary *enums;
@property (readonly, retain) NSMutableDictionary *constants;
@property (readonly, retain) NSMutableDictionary *structs;
@property (readonly, retain) NSMutableDictionary *methods;
@property (readonly, retain) NSMutableDictionary *protocol_instanceMethods;
@property (readonly, retain) NSMutableDictionary *protocol_classMethods;
@property (readonly, retain) NSMutableDictionary *functions;
@property BOOL needsUpdate;
@property (retain) NSSet *images;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)addMethodsFromProtocol:(id)a0 isInstanceMethod:(BOOL)a1 isRequiredMethod:(BOOL)a2;
- (void)addMethodsFromAllProtocols;
- (id)pathForBridgeSupportOfType:(id)a0 inBundle:(id)a1;
- (BOOL)loadMetadataFromBundle:(id)a0 error:(id *)a1;
- (BOOL)loadMetadataFromImagePath:(id)a0;
- (void)loadMetadataForLoadedImages;
- (id)constantValueForName:(id)a0;
- (id)signatureForClass:(Class)a0 selector:(SEL)a1;
- (const char *)signatureForProtocolInstanceSelector:(SEL)a0;
- (const char *)signatureForProtocolClassSelector:(SEL)a0;
- (id)signatureForCFunction:(id)a0;
- (const char *)annotatedEncodingForStructEncoding:(const char *)a0;

@end
