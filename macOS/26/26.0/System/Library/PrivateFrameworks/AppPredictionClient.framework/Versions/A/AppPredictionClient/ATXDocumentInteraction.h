@class NSString, ATXFileIdentity, ATXAppIdentity;

@interface ATXDocumentInteraction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) ATXFileIdentity *fileIdentity;
@property (readonly, copy, nonatomic) NSString *contentTypeIdentifier;
@property (readonly, copy, nonatomic) ATXAppIdentity *appIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 fileIdentity:(id)a1 contentTypeIdentifier:(id)a2 appIdentity:(id)a3;
- (BOOL)isEqualToATXDocumentInteraction:(id)a0;

@end
