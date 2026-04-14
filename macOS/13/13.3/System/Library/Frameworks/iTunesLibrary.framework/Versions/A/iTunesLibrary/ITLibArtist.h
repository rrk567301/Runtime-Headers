@class NSString, NSNumber, NSArray;
@protocol ITLibArtistDelegate;

@interface ITLibArtist : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sortName;
@property (retain, nonatomic) NSNumber *persistentID;
@property (retain, nonatomic) NSNumber *representativeItemPersistentID;
@property (retain, nonatomic) NSArray *itemIDs;
@property (retain, nonatomic) NSArray *items;
@property (weak, nonatomic) id<ITLibArtistDelegate> artistDelegate;

+ (id)artistWithDict:(id)a0;

- (void).cxx_destruct;

@end
