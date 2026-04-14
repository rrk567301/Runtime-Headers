@class NSError, NSString;

@interface BRCMigrationParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL cloneOnly;
@property BOOL forceFileProviderImport;
@property (retain) NSError *errorOverride;
@property unsigned long long originatorIdOverride;
@property (retain) NSString *hook;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
