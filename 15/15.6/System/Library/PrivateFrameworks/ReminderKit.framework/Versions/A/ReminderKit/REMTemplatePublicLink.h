@class NSURL, NSDate, REMTemplatePublicLinkConfiguration;

@interface REMTemplatePublicLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) REMTemplatePublicLinkConfiguration *configuration;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) char canBeUpdated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 configuration:(id)a1 creationDate:(id)a2 lastModifiedDate:(id)a3 expirationDate:(id)a4 canBeUpdated:(char)a5;

@end
