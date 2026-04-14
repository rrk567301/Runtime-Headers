@class NSString;

@interface CNCDPhoneNumber : ABCDOwnedObject

@property (retain, nonatomic) NSString *fullNumber;
@property (readonly, nonatomic) NSString *lastFourDigits;

- (id)description;
- (void)setFullNumber:(id)a0;

@end
