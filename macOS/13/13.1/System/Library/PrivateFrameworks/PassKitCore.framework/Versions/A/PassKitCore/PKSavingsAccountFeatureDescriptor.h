@class NSArray, NSString;

@interface PKSavingsAccountFeatureDescriptor : PKAccountFeatureDescriptor

@property (nonatomic) unsigned long long fundingSourceTypes;
@property (nonatomic) unsigned long long transferFrequencies;
@property (copy, nonatomic) NSArray *supportedFileFormatsForTransactionData;
@property (copy, nonatomic) NSString *transferTermsIdentifier;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToSavingsAccountFeatureDescriptor:(id)a0;

@end
