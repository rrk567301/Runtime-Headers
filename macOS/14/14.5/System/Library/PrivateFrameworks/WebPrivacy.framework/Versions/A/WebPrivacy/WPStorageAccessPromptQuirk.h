@class NSString, NSDictionary;

@interface WPStorageAccessPromptQuirk : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *domainPairings;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 withDomainPairings:(id)a1;

@end
