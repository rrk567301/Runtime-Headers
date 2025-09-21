@class NSString, NSArray, NSSet, TPPolicyVersion;

@interface TPSyncingPolicy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *model;
@property (readonly) TPPolicyVersion *version;
@property (readonly) NSArray *keyViewMapping;
@property (readonly) NSSet *viewList;
@property (readonly) NSSet *priorityViews;
@property (readonly) NSSet *viewsToPiggybackTLKs;
@property (readonly) NSSet *userControllableViews;
@property char isInheritedAccount;
@property (readonly) int syncUserControllableViews;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModel:(id)a0 version:(id)a1 viewList:(id)a2 priorityViews:(id)a3 userControllableViews:(id)a4 syncUserControllableViews:(int)a5 viewsToPiggybackTLKs:(id)a6 keyViewMapping:(id)a7 isInheritedAccount:(char)a8;
- (char)isSyncingEnabledForView:(id)a0;
- (id)mapDictionaryToView:(id)a0;
- (char)syncUserControllableViewsAsBoolean;

@end
