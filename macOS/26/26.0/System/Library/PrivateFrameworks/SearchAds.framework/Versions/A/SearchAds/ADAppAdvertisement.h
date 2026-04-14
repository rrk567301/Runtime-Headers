@class NSString, NSDictionary, NSArray, ADDataObject;

@interface ADAppAdvertisement : ADAppRepresentation

@property (retain, nonatomic) ADDataObject *adData;
@property (retain, nonatomic) NSString *instanceID;
@property (retain, nonatomic) NSString *selectedCppID;
@property (readonly, nonatomic) NSDictionary *commonAdInfo;
@property (retain, nonatomic) NSArray *appBinaryTraits;

- (id)initWithAdamID:(id)a0 assetInfo:(id)a1 adData:(id)a2;
- (id)AD_jsonDictionary;
- (id)initWithAdamID:(id)a0 cppIDs:(id)a1 serverCppID:(id)a2 adData:(id)a3 instanceID:(id)a4;
- (id)odmlResponse;
- (id)initWithAdamID:(id)a0 assetInfo:(id)a1 adData:(id)a2 instanceID:(id)a3;
- (void).cxx_destruct;

@end
