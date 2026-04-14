@class NSString, NSArray, NSDictionary, NSData;

@interface VSKAsset : NSObject

@property (copy, nonatomic) NSString *stringIdentifier;
@property (copy, nonatomic) NSArray *vectors;
@property (copy, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSData *payload;

- (void).cxx_destruct;
- (id)initWithStringIdentifier:(id)a0 vectors:(id)a1 attributes:(id)a2 payload:(id)a3;

@end
