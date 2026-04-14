@class NSDictionary, NSArray;

@interface GKMatchedPlayers : NSObject

@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSArray *players;
@property (readonly, nonatomic) NSDictionary *playerProperties;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMatch:(id)a0 players:(id)a1;

@end
