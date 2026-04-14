@class NSData, NSArray;

@interface AAManufacturerDataAdvertisement : NSObject

@property (readonly) unsigned short companyID;
@property (readonly, nonatomic) NSData *manufacturerData;
@property (readonly, nonatomic) NSArray *payloads;

+ (id)manufacturerDataWithData:(id)a0;

- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_parsePayloads;
- (BOOL)isEqualToAdvertisement:(id)a0;

@end
