@class NSArray, NSString;

@interface GKPlayerActivitySectionInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *instrumentationKey;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
