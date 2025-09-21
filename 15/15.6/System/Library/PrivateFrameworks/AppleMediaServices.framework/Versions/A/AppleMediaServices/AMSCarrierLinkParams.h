@class NSString, NSDictionary;

@interface AMSCarrierLinkParams : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *adamId;
@property (readonly) NSDictionary *dictionary;
@property (readonly) NSString *linkParamsString;

+ (id)_queryDictionaryFromString:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
