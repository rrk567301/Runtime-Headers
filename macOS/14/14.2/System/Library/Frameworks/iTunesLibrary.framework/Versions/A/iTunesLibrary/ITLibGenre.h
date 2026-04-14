@class NSString, NSNumber, NSArray;
@protocol ITLibGenreDelegate;

@interface ITLibGenre : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSNumber *catalogID;
@property (readonly, copy, nonatomic) NSNumber *trackPersistentID;
@property (retain, nonatomic) NSArray *albumIDs;
@property (readonly, retain, nonatomic) NSArray *albums;
@property (weak, nonatomic) id<ITLibGenreDelegate> genreDelegate;

+ (id)genreWithDict:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
