@class NSString, INRelevantShortcut;

@interface ATXRelevantShortcutsEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) INRelevantShortcut *relevantShortcut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBundleID:(id)a0 relevantShortcut:(id)a1;
- (BOOL)isEqualToATXRelevantShortcutsEvent:(id)a0;

@end
