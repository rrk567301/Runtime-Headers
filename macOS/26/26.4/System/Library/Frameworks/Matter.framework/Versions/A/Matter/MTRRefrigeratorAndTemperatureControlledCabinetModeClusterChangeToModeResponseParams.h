@class NSNumber, NSString;

@interface MTRRefrigeratorAndTemperatureControlledCabinetModeClusterChangeToModeResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *statusText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithDecodableStruct:(const void *)a0;

@end
