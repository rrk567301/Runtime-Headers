@class NSData, NSArray;

@interface AAManufacturerDataAdvertisement : NSObject

@property (readonly) unsigned short companyID;
@property (readonly, nonatomic) NSData *manufacturerData;
@property (readonly, nonatomic) NSArray *payloads;

+ (id)manufacturerDataWithData:(id)a0;

- (id)initWithData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)_parsePayloads;
- (BOOL)isEqualToAdvertisement:(id)a0;

@end
