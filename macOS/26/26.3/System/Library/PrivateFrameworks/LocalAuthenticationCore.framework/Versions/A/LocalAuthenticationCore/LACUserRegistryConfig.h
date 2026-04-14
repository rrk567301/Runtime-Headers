@class NSString, NSNumber;

@interface LACUserRegistryConfig : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ rootDir;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *rootDir;
@property (nonatomic, readonly) NSNumber *posixPermissions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRootDir:(id)a0 posixPermissions:(id)a1;

@end
