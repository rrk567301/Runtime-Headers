@class NSString;

@interface FMLHandle : NSObject

@property (copy) NSString *identifier;

+ (id)handleWithIdentifier:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)comparisonIdentifier;

@end
