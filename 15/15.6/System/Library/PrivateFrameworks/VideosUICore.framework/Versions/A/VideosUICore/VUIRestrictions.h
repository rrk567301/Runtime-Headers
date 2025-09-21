@interface VUIRestrictions : NSObject <VUIRestrictions>

@property (readonly, nonatomic) char allowsShowingUndownloadedTVShows;
@property (readonly, nonatomic) char allowsShowingUndownloadedMovies;
@property (readonly, nonatomic) char allowsExplicitContent;

+ (id)sharedInstance;

@end
