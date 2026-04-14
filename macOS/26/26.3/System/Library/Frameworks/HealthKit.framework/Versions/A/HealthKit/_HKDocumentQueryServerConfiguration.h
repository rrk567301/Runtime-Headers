@class NSArray;

@interface _HKDocumentQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) BOOL includeDocumentData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
