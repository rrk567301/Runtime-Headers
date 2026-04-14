@class NSMutableDictionary;

@interface TUMetadataItem : NSObject

@property (readonly, nonatomic) NSMutableDictionary *callMetadata;
@property (readonly, nonatomic) NSMutableDictionary *callMetadataDict;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)metadataDictForProvider:(Class)a0;
- (id)metadataForProvider:(Class)a0;
- (void)setMetadata:(id)a0 forProvider:(Class)a1;
- (void)setMetadataDict:(id)a0 forProvider:(Class)a1;

@end
