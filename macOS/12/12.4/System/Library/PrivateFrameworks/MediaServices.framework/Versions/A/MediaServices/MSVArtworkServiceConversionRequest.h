@class NSURL;

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest

@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSURL *destinationURL;
@property (nonatomic) long long destinationFormat;
@property (nonatomic) double destinationCompressionQuality;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)operationClass;
- (long long)operationPriority;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 destinationFormat:(long long)a2;

@end
