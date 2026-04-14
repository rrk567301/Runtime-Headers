@class NSString, NSArray, CSSearchableItem;

@interface SPApp : NSObject

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *categoryUTI;
@property (readonly, nonatomic) double modificationTime;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSArray *alternativeNames;
@property (retain, nonatomic) CSSearchableItem *item;
@property (retain, nonatomic) NSString *mdIdentifier;

- (id)initWithSearchableItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)_collectApplicationInfoForURL:(id)a0;
- (id)initWithURL:(id)a0 attributes:(id)a1;

@end
