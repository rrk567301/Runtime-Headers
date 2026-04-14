@class NSString, NSArray;

@interface AddressBookDisplayData : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) NSArray *addressBookMatches;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 values:(id)a1 identifier:(id)a2 property:(id)a3;
- (id)initWithLabel:(id)a0 values:(id)a1;
- (id)initWithLabel:(id)a0 values:(id)a1 identifier:(id)a2 property:(id)a3 addressBookMatches:(id)a4;

@end
