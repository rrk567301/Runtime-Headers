@class PSIDate;

@interface PSIAsset : PSIObject <NSCopying>

@property (readonly) PSIDate *creationDate;
@property (nonatomic) unsigned long long propertySets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isUpdate;
- (id)initWithUUID:(id)a0 creationDate:(id)a1;
- (unsigned long long)objectType;
- (void).cxx_destruct;

@end
