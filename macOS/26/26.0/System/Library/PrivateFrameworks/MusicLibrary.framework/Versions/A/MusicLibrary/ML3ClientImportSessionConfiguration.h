@class NSString, ML3DatabasePrivacyContext;

@interface ML3ClientImportSessionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *libraryPath;
@property (nonatomic) int sourceType;
@property (nonatomic) unsigned long long operationCount;
@property (nonatomic) BOOL allowAccountMerging;
@property (nonatomic) ML3DatabasePrivacyContext *privacyContext;
@property (nonatomic) BOOL shouldLibraryAdd;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
