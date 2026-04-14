@class NSString;

@interface WLKFavorite : NSObject

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *leagueID;
@property (readonly, nonatomic) NSString *id;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
