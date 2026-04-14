@class NSString;

@interface _LTLanguageInstallationStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long progress;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (nonatomic) unsigned long long offlineState;
@property (nonatomic) long long totalExpected;
@property (nonatomic) long long totalWritten;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) double expectedTimeRemaining;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
