@class NSString;

@interface WLKFavorite : NSObject

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *leagueID;
@property (readonly, nonatomic) NSString *id;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithID:(id)a0 name:(id)a1 leagueID:(id)a2;

@end
