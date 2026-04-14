@class NSArray, NSDictionary;

@interface BWPointCloudFormatRequirements : BWFormatRequirements <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *supportedDataFormats;
@property (nonatomic) unsigned long long maxPoints;
@property (nonatomic) unsigned long long dataBufferSize;
@property (readonly, nonatomic) NSDictionary *dataBufferAttributes;
@property (nonatomic) BOOL memoryPoolUseAllowed;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (Class)formatClass;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (unsigned int)mediaType;
- (void)dealloc;

@end
