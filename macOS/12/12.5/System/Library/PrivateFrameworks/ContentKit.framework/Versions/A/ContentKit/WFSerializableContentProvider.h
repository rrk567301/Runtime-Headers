@class NSMutableDictionary;

@interface WFSerializableContentProvider : NSObject

@property (readonly, nonatomic) NSMutableDictionary *entriesForClassNames;

+ (id)sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (void)registerSerializableContentClasses;
- (id)entryConsideringSuperclassesForClass:(Class)a0;
- (id)serializedRepresentationForObject:(id)a0;
- (id)objectOfClass:(Class)a0 withSerializedRepresentation:(id)a1;

@end
