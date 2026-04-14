@class NSDictionary, NSString;

@interface IDSMessageSendEnforcementMetric : NSObject <CUTCoreAnalyticsMetric, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long state;
@property long long code;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithState:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
