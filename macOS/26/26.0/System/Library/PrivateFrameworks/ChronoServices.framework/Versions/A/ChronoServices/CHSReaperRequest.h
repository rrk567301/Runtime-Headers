@class NSString;

@interface CHSReaperRequest : NSObject <NSSecureCoding, BSXPCSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL dryRun;
@property (readonly, nonatomic) unsigned long long scenario;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDryRun:(BOOL)a0 scenario:(unsigned long long)a1;

@end
