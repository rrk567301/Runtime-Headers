@class NSString;

@interface FMLHandle : NSObject

@property (copy) NSString *identifier;

+ (id)handleWithIdentifier:(id)a0;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)comparisonIdentifier;

@end
