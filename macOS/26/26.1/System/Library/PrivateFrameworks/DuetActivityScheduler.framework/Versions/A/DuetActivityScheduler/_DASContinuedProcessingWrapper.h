@class NSString;

@interface _DASContinuedProcessingWrapper : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *iconBundleIdentifier;
@property (copy, nonatomic) NSString *linkToBundleIdentifier;
@property (nonatomic) long long resources;
@property (nonatomic) long long submissionStrategy;
@property (nonatomic) BOOL isForegroundAppProxy;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 iconBundleIdentifier:(id)a2 linkToBundleIdentifier:(id)a3 resources:(long long)a4;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 iconBundleIdentifier:(id)a2 linkToBundleIdentifier:(id)a3 resources:(long long)a4 submissionStrategy:(long long)a5 isForegroundAppProxy:(BOOL)a6;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 resources:(long long)a2 submissionStrategy:(long long)a3;

@end
