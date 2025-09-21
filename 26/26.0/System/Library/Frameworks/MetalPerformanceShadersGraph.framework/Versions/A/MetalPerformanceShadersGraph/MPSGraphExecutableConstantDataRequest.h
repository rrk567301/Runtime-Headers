@class NSURL, NSDictionary;

@interface MPSGraphExecutableConstantDataRequest : MPSGraphObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *mpsgraphPackageURL;
@property (retain) NSDictionary *resourceOffsets;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initForMPSGraphPackageAtURL:(id)a0 device:(id)a1 multipleInputTypes:(id)a2 compilationDescriptor:(id)a3 includeConstantDataForNewSpecializations:(BOOL)a4;

@end
