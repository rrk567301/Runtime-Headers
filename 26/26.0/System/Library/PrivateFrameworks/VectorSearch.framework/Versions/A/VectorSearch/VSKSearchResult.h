@class NSString, NSDictionary, NSData, NSNumber;

@interface VSKSearchResult : NSObject

@property (copy, nonatomic) NSString *stringIdentifier;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSNumber *value;
@property (nonatomic) long long metric;
@property (copy, nonatomic) NSDictionary *attributes;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 payload:(id)a1 metric:(long long)a2 value:(id)a3;
- (id)initWithIdentifier:(id)a0 payload:(id)a1 metric:(long long)a2 value:(id)a3 attributes:(id)a4;

@end
