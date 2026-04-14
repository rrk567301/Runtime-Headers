@class NSData;

@interface _WKAuthenticationPRFInputValues : NSObject <_WKAuthenticationPRFInputValuesStaging>

@property (copy, nonatomic) NSData *prfSalt1;
@property (copy, nonatomic) NSData *prfSalt2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
