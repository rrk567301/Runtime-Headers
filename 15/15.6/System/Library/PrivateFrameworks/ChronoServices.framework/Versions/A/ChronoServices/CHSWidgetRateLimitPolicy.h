@class NSString, NSSet;

@interface CHSWidgetRateLimitPolicy : NSObject <BSDescriptionStreamable, NSSecureCoding> {
    NSSet *rateLimits;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSSet *rateLimits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initWithIdentifier:(id)a0 rateLimits:(id)a1;

@end
