@class NSString, NSDate;

@interface PGGraphContactNode : PGGraphOptimizedNode

@property (readonly) NSString *name;
@property (readonly) NSString *contactIdentifier;
@property (readonly) NSDate *birthdayDate;
@property (readonly) NSDate *potentialBirthdayDate;

- (id)description;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned long long)sexHintForGivenName;
- (id)initWithName:(id)a0 contactIdentifier:(id)a1 birthdayDate:(id)a2 potentialBirthdayDate:(id)a3;

@end
