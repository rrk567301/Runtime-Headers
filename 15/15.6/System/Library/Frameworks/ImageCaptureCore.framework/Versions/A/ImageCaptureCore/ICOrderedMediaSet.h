@class NSMutableDictionary;

@interface ICOrderedMediaSet : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mediaLock;
@property (retain, nonatomic) NSMutableDictionary *mediaItems;
@property (readonly, nonatomic) unsigned long long mediaItemCount;

- (void).cxx_destruct;
- (void)removeAllItems;
- (id)initWithTypes:(id)a0;
- (void)addMediaItemToIndex:(id)a0;
- (id)arrayForType:(id)a0;
- (id)mediaItemWithHandle:(unsigned long long)a0 inTypes:(id)a1;
- (id)orderedSetForType:(id)a0;
- (void)performSelector:(id)a0 onTypes:(id)a1;
- (char)removeMediaItemFromIndex:(id)a0;
- (char)removeMediaItemWithHandleFromIndex:(unsigned long long)a0;
- (char)removeMediaItemsFromIndex:(id)a0;

@end
