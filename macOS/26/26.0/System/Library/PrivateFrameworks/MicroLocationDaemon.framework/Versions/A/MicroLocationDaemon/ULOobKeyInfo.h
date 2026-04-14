@class NSData;

@interface ULOobKeyInfo : NSObject

@property (retain, nonatomic) NSData *btAddressData;
@property (retain, nonatomic) NSData *irkData;

+ (id)ULOobKeyInfoToCBOOBKeyInfo:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAddressData:(id)a0 andIrkData:(id)a1;

@end
