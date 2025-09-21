@interface PKGroupsControllerSnapshotFetchOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char limitResults;
@property (nonatomic) char includeAnnotations;
@property (nonatomic) unsigned long long allowedPassType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
