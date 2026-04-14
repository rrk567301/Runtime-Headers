@class NSString;

@interface SRAssertion : NSObject {
    BOOL _isSR;
    NSString *_assertionID;
}

@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *deliveryType;

- (id)assertionID;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAssertionID:(id)a0;
- (id)initWithAssetType:(id)a0 language:(id)a1 deliveryType:(id)a2;

@end
