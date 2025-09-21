@class NSString;

@interface _DASContinuedProcessingWrapper : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *iconBundleIdentifier;
@property (nonatomic) long long resources;
@property (nonatomic) long long submissionStrategy;
@property (nonatomic) BOOL isForegroundAppProxy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 iconBundleIdentifier:(id)a2 resources:(long long)a3;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 iconBundleIdentifier:(id)a2 resources:(long long)a3 submissionStrategy:(long long)a4 isForegroundAppProxy:(BOOL)a5;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 resources:(long long)a2 submissionStrategy:(long long)a3;

@end
