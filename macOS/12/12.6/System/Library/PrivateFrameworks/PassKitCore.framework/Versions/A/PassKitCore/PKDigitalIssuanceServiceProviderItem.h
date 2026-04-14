@class NSString, NSDecimalNumber;

@interface PKDigitalIssuanceServiceProviderItem : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) unsigned long long unitCount;
@property (readonly, copy, nonatomic) NSDecimalNumber *amount;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
