@class NSString, NSArray;

@interface FMLPlaceMark : NSObject

@property (copy) NSString *locality;
@property (copy) NSString *administrativeArea;
@property (copy) NSString *country;
@property (copy) NSString *stateCode;
@property (copy) NSString *streetAddress;
@property (copy) NSString *streetName;
@property (copy) NSArray *formattedAddressLines;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)comparisonIdentifier;
- (id)initWithLocality:(id)a0 administrativeArea:(id)a1 country:(id)a2 stateCode:(id)a3 streetAddress:(id)a4 streetName:(id)a5 formattedAddressLines:(id)a6;

@end
