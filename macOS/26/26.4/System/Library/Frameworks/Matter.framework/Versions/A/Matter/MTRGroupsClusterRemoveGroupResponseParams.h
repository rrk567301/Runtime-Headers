@class NSNumber;

@interface MTRGroupsClusterRemoveGroupResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned char x0; unsigned short x1; } *)a0;
- (id)initWithDecodableStruct:(const struct DecodableType { unsigned char x0; unsigned short x1; } *)a0;

@end
