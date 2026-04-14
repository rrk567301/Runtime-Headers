@class NSString;

@interface GKGameGenre : GKInternalRepresentation

@property (readonly, copy, nonatomic) NSString *genreID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *parentID;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)initWithGenreID:(id)a0 name:(id)a1 parentID:(id)a2;

@end
