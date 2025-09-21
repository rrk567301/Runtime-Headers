@class NSString;

@interface _CHSSimpleWidgetRefreshStrategy : NSObject <BSDescriptionStreamable, CHSWidgetRefreshStrategy, NSSecureCoding> {
    NSString *_rateLimitIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isDefaultStrategy) char isDefaultStrategy;
@property (readonly, nonatomic, getter=isDisabledStrategy) char isDisabledStrategy;
@property (readonly, nonatomic, getter=isRateLimited) char rateLimited;
@property (readonly, copy, nonatomic) NSString *rateLimitIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initWithDefaultStrategy;
- (id)initWithDisabledStrategy;
- (id)initWithRateLimitIdentifier:(id)a0;

@end
