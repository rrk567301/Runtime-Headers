@class NSUUID, NSString;

@interface NCNotificationAlertOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) char shouldSuppress;
@property (readonly, nonatomic) unsigned long long suppression;
@property (readonly, nonatomic) unsigned long long intelligentBehavior;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, copy, nonatomic) NSUUID *activeModeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (char)shouldSuppress;
- (id)initWithNotificationAlertOptions:(id)a0;

@end
