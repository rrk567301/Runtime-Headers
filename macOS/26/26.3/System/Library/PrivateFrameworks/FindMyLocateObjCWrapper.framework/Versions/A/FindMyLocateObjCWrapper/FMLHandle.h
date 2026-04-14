@class NSString;

@interface FMLHandle : NSObject

@property (copy) NSString *identifier;

+ (id)handleWithIdentifier:(id)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)comparisonIdentifier;

@end
