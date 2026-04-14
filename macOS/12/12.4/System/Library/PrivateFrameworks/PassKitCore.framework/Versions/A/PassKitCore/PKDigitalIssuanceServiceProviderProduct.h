@class NSString, NSArray;

@interface PKDigitalIssuanceServiceProviderProduct : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
