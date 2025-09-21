@class PHCloudIdentifier;

@interface PHCreationRequestOptions : NSObject <NSCopying>

@property (retain) PHCloudIdentifier *reservedCloudIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithXPCDict:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeToXPCDict:(id)a0;

@end
