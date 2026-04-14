@class NSString;

@interface DDSTrialQuery : NSObject <NSSecureCoding, NSCopying> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) int projectId;
@property (readonly) unsigned int namespaceId;

+ (id)defaultQuery;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithProjectId:(int)a0 namespaceId:(unsigned int)a1;

@end
