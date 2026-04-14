@class NSString, NSArray;

@interface WLKContinueWatchingCollection : NSObject

@property (readonly, copy, nonatomic) NSString *collectionID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
