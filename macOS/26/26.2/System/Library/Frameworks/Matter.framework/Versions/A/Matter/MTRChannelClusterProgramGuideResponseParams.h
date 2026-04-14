@class NSArray, MTRChannelClusterChannelPagingStruct;

@interface MTRChannelClusterProgramGuideResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRChannelClusterChannelPagingStruct *paging;
@property (copy, nonatomic) NSArray *programList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithDecodableStruct:(const void *)a0;

@end
