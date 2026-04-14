@class NSArray, NSString, NSDate;

@interface CKLastSentCapabilitiesAndUsage : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isNone;
@property (readonly, copy, nonatomic) NSArray *capabilitySet;
@property (readonly, copy, nonatomic) NSDate *capabilitySetSavedDate;
@property (copy, nonatomic) NSDate *usageSavedDate;
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
- (id)initWithCapabilitySet:(id)a0 savedDate:(id)a1 usageSavedDate:(id)a2;
- (id)initWithLastSentCapabilitiesAndUsageEntry:(id)a0;

@end
