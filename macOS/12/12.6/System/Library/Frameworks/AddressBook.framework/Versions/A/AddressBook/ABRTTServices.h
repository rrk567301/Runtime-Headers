@class NSString;

@interface ABRTTServices : NSObject <ABRTTServices>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isRTTContact:(id)a0;
+ (void)callRTTContact:(id)a0 withPhoneNumber:(id)a1;

- (BOOL)isTTYEnabled;
- (BOOL)isRTTContact:(id)a0;
- (void)callRTTContact:(id)a0 withPhoneNumber:(id)a1;

@end
