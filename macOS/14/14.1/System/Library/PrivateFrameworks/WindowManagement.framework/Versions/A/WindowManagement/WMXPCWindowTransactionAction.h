@class _WMReplaceWindowSetWindowActionInfo, NSArray, _WMProposeKeyWindowActionInfo, _WMOrderAllWindowsFrontActionInfo, NSSet, WMWindowPropertySnapshot, _WMWindowOrderingInfo, _WMRemoveWindowFromUserSetActionInfo;

@interface WMXPCWindowTransactionAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long actionType;
@property (readonly, copy, nonatomic) WMWindowPropertySnapshot *properties;
@property (readonly, copy, nonatomic) _WMWindowOrderingInfo *orderingInfo;
@property (readonly, copy, nonatomic) _WMOrderAllWindowsFrontActionInfo *orderAllWindowsFrontInfo;
@property (readonly, copy, nonatomic) _WMReplaceWindowSetWindowActionInfo *replaceWindowSetWindowInfo;
@property (readonly, copy, nonatomic) _WMProposeKeyWindowActionInfo *proposeKeyWindowInfo;
@property (readonly, copy, nonatomic) _WMRemoveWindowFromUserSetActionInfo *removeWindowFromUserSetInfo;
@property (readonly, copy, nonatomic) NSArray *windowIDs;
@property (readonly, copy, nonatomic) NSSet *fences;
@property (readonly, nonatomic) unsigned long long spaceID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initOrderActionWithInfo:(id)a0 fences:(id)a1;
- (id)initCycleActionWithType:(long long)a0 fences:(id)a1;
- (id)initActionWithType:(long long)a0 fences:(id)a1;
- (id)initApplicationLifecycleActionWithType:(long long)a0 fences:(id)a1;
- (id)initHideActionWithType:(long long)a0 fences:(id)a1;
- (id)initLifecycleActionWithType:(long long)a0 properties:(id)a1 fences:(id)a2;
- (id)initLoginTransitionActionWithType:(long long)a0 fences:(id)a1;
- (id)initMiniaturizationActionWithType:(long long)a0 properties:(id)a1 fences:(id)a2;
- (id)initMiniaturizationActionWithType:(long long)a0 windowIDs:(id)a1 fences:(id)a2;
- (id)initWithFullscreenTransitionType:(long long)a0 windowIDs:(id)a1 spaceID:(unsigned long long)a2 fences:(id)a3;
- (id)initWithOrderAllWindowsFrontActionInfo:(id)a0 fences:(id)a1;
- (id)initWithProposeKeyAndMainWindowRequestType:(long long)a0 windowInfo:(id)a1 fences:(id)a2;
- (id)initWithRemoveWindowFromUserSetActionInfo:(id)a0 fences:(id)a1;
- (id)initWithReplaceWindowSetWindowInfo:(id)a0 fences:(id)a1;

@end
