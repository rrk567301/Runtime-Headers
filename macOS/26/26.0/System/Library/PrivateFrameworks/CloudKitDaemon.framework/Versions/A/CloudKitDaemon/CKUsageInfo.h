@class NSString, NSDate;

@interface CKUsageInfo : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isNone;
@property (copy, nonatomic) NSDate *lastUsed;
@property (copy, nonatomic) NSDate *lastSent;
@property (copy, nonatomic) NSDate *sending;
@property (nonatomic) unsigned long long failureCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)none;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)completeSendingForDate:(id)a0 withSuccess:(BOOL)a1;
- (id)initWithLastUsed:(id)a0;
- (id)initWithLastUsed:(id)a0 lastSent:(id)a1 sending:(id)a2 failureCount:(unsigned long long)a3;
- (id)initWithUsageInfoEntry:(id)a0;
- (id)startSendingWithResendingRefreshInterval:(double)a0 maxFailureCount:(unsigned long long)a1;

@end
