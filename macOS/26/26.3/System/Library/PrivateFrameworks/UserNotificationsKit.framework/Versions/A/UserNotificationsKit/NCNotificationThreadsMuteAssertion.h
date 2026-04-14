@class NSString, NSSet;

@interface NCNotificationThreadsMuteAssertion : NSObject <BSDescriptionProviding, NCNotificationMuteAssertion> {
    NSSet *_mutedThreadIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)threadsMuteAssertionWithMutedThreadIDs:(id)a0;

- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithMutedThreadIDs:(id)a0;
- (unsigned long long)activeMuteAssertionLevelForThreadIdentifier:(id)a0;

@end
