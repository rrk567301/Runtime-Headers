@interface ALSCTrivialGreenClient : NSObject <ALSCGreenClientProtocol>

@property (nonatomic) char calculatedKey2Value;
@property (readonly, nonatomic) char valuesFinalized;
@property (readonly, nonatomic) char key1Value;
@property (readonly, nonatomic) char key2Value;
@property (readonly, nonatomic) char key3Value;

+ (id)_skuRegionCode;

- (id)init;
- (id)_initWithSKURegionCode:(id)a0 key2EnablingSKURegionCodes:(id)a1;

@end
