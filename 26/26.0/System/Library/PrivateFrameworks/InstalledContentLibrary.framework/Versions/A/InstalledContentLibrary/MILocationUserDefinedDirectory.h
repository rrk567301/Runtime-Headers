@class NSString, NSDictionary, NSURL;

@interface MILocationUserDefinedDirectory : NSObject <MILocationProtocol, NSSecureCoding, NSCoding, NSCopying>

@property (class, nonatomic, readonly) NSString *plistTypeName;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDictionary *plistDictionary;
@property (nonatomic, readonly) NSURL *_targetDirectoryURL;
@property (nonatomic, readonly) NSURL *targetDirectoryURL;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTargetDirectoryURL:(id)a0 error:(id *)a1;
- (id)initFromPlistDictionary:(id)a0 error:(id *)a1;
- (id)initWithTargetDirectoryURLInternal:(id)a0;
- (BOOL)isEqualWithLocationUserDefinedDirectory:(id)a0;

@end
