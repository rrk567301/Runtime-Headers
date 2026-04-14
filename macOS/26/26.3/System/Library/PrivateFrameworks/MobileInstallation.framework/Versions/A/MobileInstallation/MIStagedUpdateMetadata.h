@class NSString;

@interface MIStagedUpdateMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *stagedIdentifier;
@property (nonatomic) unsigned long long stagedDiskUsage;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initForStagedIdentifier:(id)a0 diskUsage:(unsigned long long)a1;

@end
