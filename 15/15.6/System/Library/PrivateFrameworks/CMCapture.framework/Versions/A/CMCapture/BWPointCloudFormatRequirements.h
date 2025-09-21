@class NSArray, NSDictionary;

@interface BWPointCloudFormatRequirements : BWFormatRequirements <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *supportedDataFormats;
@property (nonatomic) unsigned long long maxPoints;
@property (nonatomic) unsigned long long dataBufferSize;
@property (readonly, nonatomic) NSDictionary *dataBufferAttributes;
@property (nonatomic) char memoryPoolUseAllowed;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)mediaType;
- (Class)formatClass;

@end
