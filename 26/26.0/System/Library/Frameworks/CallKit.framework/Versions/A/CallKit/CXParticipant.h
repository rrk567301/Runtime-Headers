@class NSURL, NSString, CXSandboxExtendedURL;

@interface CXParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) CXSandboxExtendedURL *sandboxExtendedImageURL;
@property (weak, nonatomic) id wrappedByObject;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithParticipant:(id)a0;
- (BOOL)isEqualToParticipant:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)initWithName:(id)a0 imageURL:(id)a1;

@end
