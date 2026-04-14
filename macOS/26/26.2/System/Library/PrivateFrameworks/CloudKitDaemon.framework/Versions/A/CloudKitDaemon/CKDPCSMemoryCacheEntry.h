@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject

@property (retain, nonatomic) CKDPCSData *pcsData;
@property double lastAccess;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)CKPropertiesDescription;

@end
