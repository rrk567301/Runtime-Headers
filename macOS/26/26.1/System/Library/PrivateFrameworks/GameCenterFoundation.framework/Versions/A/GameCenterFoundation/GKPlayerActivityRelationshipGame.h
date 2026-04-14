@class NSNumber, GKPlayerActivityRelationshipIcon;

@interface GKPlayerActivityRelationshipGame : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) NSNumber *adamId;
@property (retain, nonatomic) GKPlayerActivityRelationshipIcon *icon;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
