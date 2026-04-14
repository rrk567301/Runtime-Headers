@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject

@property (retain, nonatomic) CKDPCSData *pcsData;
@property double lastAccess;

- (id)CKPropertiesDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
