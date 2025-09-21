@interface TSKOperationPropertiesUtils : NSObject

+ (struct vector<TSKOperationPropertyId, std::allocator<TSKOperationPropertyId>> { unsigned short *x0; unsigned short *x1; struct __compressed_pair<TSKOperationPropertyId *, std::allocator<TSKOperationPropertyId>> { unsigned short *x0; } x2; })propertyIdsForPropertyNames:(id)a0 allowUnknown:(char)a1;
+ (id)propertyNameForPropertyId:(unsigned short)a0;
+ (struct { unsigned short x0; char x1; char x2; unsigned short x3[6]; })propertyTypeWithId:(unsigned short)a0;
+ (struct { unsigned short x0; char x1; char x2; unsigned short x3[6]; })propertyTypeWithName:(id)a0;

@end
