@class NSURL, NSString, CXSandboxExtendedURL;

@interface CXParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) CXSandboxExtendedURL *sandboxExtendedImageURL;
@property (weak, nonatomic) id wrappedByObject;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithParticipant:(id)a0;
- (char)isEqualToParticipant:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)initWithName:(id)a0 imageURL:(id)a1;

@end
