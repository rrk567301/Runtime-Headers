@class NSString, NSData, DMFControlGroupIdentifier;

@interface CRKSetUserImageRequest : CATTaskRequest

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSData *userImageData;
@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
