@class NSString, NSNumber;

@interface ITLibGenre : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSNumber *catalogID;
@property (readonly, copy, nonatomic) NSNumber *trackPersistentID;

+ (id)genreWithDict:(id)a0;

- (void).cxx_destruct;

@end
