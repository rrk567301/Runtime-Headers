@class NSError;

@interface BRCMigrationParameters : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char cloneOnly;
@property (retain) NSError *errorOverride;
@property unsigned long long originatorIdOverride;
@property char dropAccountFile;
@property char dropClientState;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
