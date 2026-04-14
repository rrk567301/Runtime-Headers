@class PSIDate;

@interface PSIAsset : PSIObject <NSCopying>

@property (readonly) PSIDate *creationDate;
@property (nonatomic) unsigned long long propertySets;

- (unsigned long long)objectType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isUpdate;
- (id)initWithUUID:(id)a0 creationDate:(id)a1;

@end
