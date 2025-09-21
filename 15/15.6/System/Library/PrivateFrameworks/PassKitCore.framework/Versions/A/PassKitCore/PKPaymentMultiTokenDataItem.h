@class NSArray;

@interface PKPaymentMultiTokenDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSArray *multiTokenContexts;

+ (long long)dataType;

- (long long)context;
- (char)isValidWithError:(id *)a0;

@end
