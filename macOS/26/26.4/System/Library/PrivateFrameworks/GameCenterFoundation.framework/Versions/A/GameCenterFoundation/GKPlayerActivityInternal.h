@class NSArray, NSString;

@interface GKPlayerActivityInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *continuationToken;

+ (id)secureCodedPropertyKeys;

- (id)initWithServerResponse:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
