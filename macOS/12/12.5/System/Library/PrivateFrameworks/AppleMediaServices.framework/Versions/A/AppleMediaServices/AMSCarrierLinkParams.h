@class NSDictionary, NSString;

@interface AMSCarrierLinkParams : NSObject

@property (retain) NSDictionary *fields;
@property (readonly) NSString *adamId;
@property (readonly) NSString *linkParamsString;

+ (id)_queryDictionaryFromString:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
