@class NSData;

@interface ULOobKeyInfo : NSObject

@property (retain, nonatomic) NSData *btAddressData;
@property (retain, nonatomic) NSData *irkData;

+ (id)ULOobKeyInfoToCBOOBKeyInfo:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAddressData:(id)a0 andIrkData:(id)a1;

@end
