@class NSString, CSSearchableItem;

@interface SPApp : NSObject {
    CSSearchableItem *_item;
}

@property (readonly, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *mdIdentifier;
@property (readonly, nonatomic) double modificationTime;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithSearchableItem:(id)a0;
- (BOOL)_collectApplicationInfoForURL:(id)a0 attributes:(id)a1;
- (id)indexableItem;
- (id)queryableItem;

@end
