@class NSString, NSDate;

@interface ROSLockoutSystemLockSettings : NSObject

@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *informationalMessage;
@property (readonly) NSDate *nextRetryDate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPhoneNumber:(id)a0 withInformationalMessage:(id)a1 withNextRetryDate:(id)a2;

@end
