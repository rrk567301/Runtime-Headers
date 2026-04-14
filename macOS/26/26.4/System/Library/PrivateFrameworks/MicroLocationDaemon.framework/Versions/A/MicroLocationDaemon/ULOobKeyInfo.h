@class NSData;

@interface ULOobKeyInfo : NSObject

@property (retain, nonatomic) NSData *btAddressData;
@property (retain, nonatomic) NSData *irkData;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAddressData:(id)a0 andIrkData:(id)a1;

@end
