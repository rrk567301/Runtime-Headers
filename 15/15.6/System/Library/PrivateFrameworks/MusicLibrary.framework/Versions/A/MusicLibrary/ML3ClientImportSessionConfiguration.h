@class NSString, ML3DatabasePrivacyContext;

@interface ML3ClientImportSessionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *libraryPath;
@property (nonatomic) int sourceType;
@property (nonatomic) unsigned long long operationCount;
@property (nonatomic) char allowAccountMerging;
@property (nonatomic) ML3DatabasePrivacyContext *privacyContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
