@class NSString, KVItemBuilder, NSMutableArray;

@interface KMMapper_MPMediaEntity : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSMutableArray *_items;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

- (id)init;
- (void).cxx_destruct;
- (long long)targetItemType;
- (id)itemsFromExternalObject:(id)a0 additionalFields:(id)a1 error:(id *)a2;
- (BOOL)_itemsFromMediaItem:(id)a0 error:(id *)a1;
- (BOOL)_itemsFromMediaPlaylist:(id)a0 error:(id *)a1;
- (BOOL)_addItemWithEntity:(id)a0 fieldType:(long long)a1 value:(id)a2 error:(id *)a3;

@end
