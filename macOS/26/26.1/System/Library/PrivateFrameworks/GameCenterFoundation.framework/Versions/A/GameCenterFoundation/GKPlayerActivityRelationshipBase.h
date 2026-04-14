@class NSString;

@interface GKPlayerActivityRelationshipBase : GKInternalRepresentation

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *image;
@property (retain, nonatomic) NSString *identifier;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
