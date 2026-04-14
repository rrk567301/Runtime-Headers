@class NSDate, NSString, NSArray, WFWorkflowIcon, NSData, WFIcon, NSUserActivity, NSNumber;

@interface WFWorkflowReference : WFWorkflowDescriptor <WFNaming, NSItemProviderReading, NSItemProviderWriting>

@property (class, readonly, copy) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) NSUserActivity *userActivityForViewing;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *actionsDescription;
@property (readonly, nonatomic) unsigned long long actionCount;
@property (readonly, nonatomic) long long syncHash;
@property (readonly, copy, nonatomic) WFWorkflowIcon *icon;
@property (readonly, nonatomic) BOOL isDeleted;
@property (readonly, nonatomic) BOOL hiddenFromLibraryAndSync;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSDate *lastRunDate;
@property (readonly, nonatomic) long long remoteQuarantineStatus;
@property (readonly, nonatomic) NSData *remoteQuarantineHash;
@property (readonly, nonatomic) BOOL hasShortcutInputVariables;
@property (readonly, nonatomic) BOOL showInSearch;
@property (readonly, nonatomic) BOOL receivesInputFromSearch;
@property (readonly, nonatomic) BOOL disabledOnLockScreen;
@property (copy, nonatomic) NSString *source;
@property (readonly, nonatomic) NSNumber *runEventsCount;
@property (readonly, nonatomic) BOOL hasOutputAction;
@property (readonly, nonatomic) NSString *attributionTitle;
@property (readonly, nonatomic) WFIcon *attributionIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (BOOL)supportsSecureCoding;
+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributionIconWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 rounded:(BOOL)a2;
- (id)speakableString;
- (id)externalURLForRunningWithSource:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 color:(long long)a2 glyphCharacter:(unsigned short)a3 associatedAppBundleIdentifier:(id)a4 searchAttributionAppBundleIdentifier:(id)a5 subtitle:(id)a6 actionsDescription:(id)a7 actionCount:(unsigned long long)a8 syncHash:(long long)a9 isDeleted:(BOOL)a10 hiddenFromLibraryAndSync:(BOOL)a11 creationDate:(id)a12 modificationDate:(id)a13 lastRunDate:(id)a14 remoteQuarantineStatus:(long long)a15 remoteQuarantineHash:(id)a16 showInSearch:(BOOL)a17 receivesInputFromSearch:(BOOL)a18 hasShortcutInputVariables:(BOOL)a19 disabledOnLockScreen:(BOOL)a20 source:(id)a21 runEventsCount:(id)a22 hasOutputAction:(BOOL)a23;

@end
