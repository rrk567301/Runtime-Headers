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
@property (readonly, nonatomic) char isDeleted;
@property (readonly, nonatomic) char hiddenFromLibraryAndSync;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSDate *lastRunDate;
@property (readonly, nonatomic) long long remoteQuarantineStatus;
@property (readonly, nonatomic) NSData *remoteQuarantineHash;
@property (readonly, nonatomic) char hasShortcutInputVariables;
@property (readonly, nonatomic) char disabledOnLockScreen;
@property (copy, nonatomic) NSString *source;
@property (readonly, nonatomic) NSNumber *runEventsCount;
@property (readonly, nonatomic) NSString *attributionTitle;
@property (readonly, nonatomic) WFIcon *attributionIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (char)supportsSecureCoding;
+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)attributionIconWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 rounded:(char)a2;
- (id)speakableString;
- (id)externalURLForRunningWithSource:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 color:(long long)a2 glyphCharacter:(unsigned short)a3 associatedAppBundleIdentifier:(id)a4 subtitle:(id)a5 actionsDescription:(id)a6 actionCount:(unsigned long long)a7 syncHash:(long long)a8 isDeleted:(char)a9 hiddenFromLibraryAndSync:(char)a10 creationDate:(id)a11 modificationDate:(id)a12 lastRunDate:(id)a13 remoteQuarantineStatus:(long long)a14 remoteQuarantineHash:(id)a15 hasShortcutInputVariables:(char)a16 disabledOnLockScreen:(char)a17 source:(id)a18 runEventsCount:(id)a19;

@end
