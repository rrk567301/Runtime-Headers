@class NSString, NSDictionary;

@interface CNMutableActivityAlert : CNActivityAlert

@property (copy) NSString *sound;
@property (copy) NSString *vibration;
@property char ignoreMute;
@property (copy) NSDictionary *userInfo;

- (id)freeze;

@end
