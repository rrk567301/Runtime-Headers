@class GKPlayerInternal;

@interface GKPlayerActivityRelationshipPlayer : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) GKPlayerInternal *playerInternal;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
