@class NSString, NSDictionary, CNContact;

@interface SSContact : NSObject

@property (retain, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSString *matchingString;
@property (copy) NSDictionary *idsIDsToIdentifiers;

+ (id)contactWithCNContact:(id)a0 matchingString:(id)a1;
+ (id)contactWithHost:(id)a0 matchingString:(id)a1;

- (void)dealloc;
- (id)description;
- (id)initWithCNContact:(id)a0 matchingString:(id)a1;
- (id)initWithHost:(id)a0 matchingString:(id)a1;
- (id)indentString:(id)a0 spaces:(long long)a1;

@end
