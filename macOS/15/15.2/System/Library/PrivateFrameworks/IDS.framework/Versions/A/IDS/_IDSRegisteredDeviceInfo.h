@class NSDictionary, _IDSRegisteredDevice, NSArray;

@interface _IDSRegisteredDeviceInfo : NSObject

@property (readonly, nonatomic) _IDSRegisteredDevice *device;
@property (readonly, nonatomic) NSDictionary *clientData;
@property (readonly, nonatomic) NSArray *identities;
@property (readonly, nonatomic) NSArray *linkedUserURIs;
@property (readonly, nonatomic) NSArray *subServices;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 device:(id)a1;

@end
