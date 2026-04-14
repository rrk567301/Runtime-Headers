@class NSMutableDictionary;

@interface IASDataStoreMetadata : NSObject

@property (retain, nonatomic) NSMutableDictionary *metadataDictionary;

+ (id)deserialize:(id)a0;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;

@end
