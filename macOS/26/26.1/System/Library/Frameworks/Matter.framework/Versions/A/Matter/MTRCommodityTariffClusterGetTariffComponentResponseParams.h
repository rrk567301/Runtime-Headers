@class NSString, NSArray, MTRCommodityTariffClusterTariffComponentStruct;

@interface MTRCommodityTariffClusterGetTariffComponentResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *dayEntryIDs;
@property (copy, nonatomic) MTRCommodityTariffClusterTariffComponentStruct *tariffComponent;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithDecodableStruct:(const void *)a0;

@end
