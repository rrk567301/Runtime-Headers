@class NSString, NSDate;

@interface PGGraphContactNode : PGGraphOptimizedNode

@property (readonly) NSString *name;
@property (readonly) NSString *contactIdentifier;
@property (readonly) NSDate *birthdayDate;
@property (readonly) NSDate *potentialBirthdayDate;

+ (id)filter;
+ (id)filterWithContactIdentifiers:(id)a0;

- (unsigned short)domain;
- (id)propertyDictionary;
- (BOOL)hasProperties:(id)a0;
- (id)label;
- (id)description;
- (void)setLocalProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 contactIdentifier:(id)a1 birthdayDate:(id)a2 potentialBirthdayDate:(id)a3;

@end
