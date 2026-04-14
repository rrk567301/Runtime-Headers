@class NSString;

@interface AddressObject : NSObject

@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *interfaceType;

- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 interfaceType:(id)a1;

@end
