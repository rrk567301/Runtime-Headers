@class NSArray, NSString;

@interface GKPlayerActivityInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *continuationToken;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)initWithServerResponse:(id)a0;

@end
