@class NSString, NSMutableSet, NSImage, NSURL, NSColor;

@interface IPInputSource : NSObject

@property (readonly, nonatomic) struct __TISInputSource { } *inputSourceRef;
@property (readonly, nonatomic) IPInputSource *parentInputSource;
@property (readonly, nonatomic) BOOL isInputMode;
@property (readonly, nonatomic) BOOL isChineseHandwriting;
@property (readonly, nonatomic) BOOL isPluginIM;
@property (readonly, nonatomic) BOOL isSystemProvided;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *inputSourceID;
@property (readonly, copy, nonatomic) NSString *localizedInputSourceName;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, copy, nonatomic) NSString *localizedLanguage;
@property (readonly, nonatomic) NSMutableSet *metaData;
@property (readonly, nonatomic) NSImage *iconImage;
@property (readonly, nonatomic) NSURL *settingURL;
@property (readonly, nonatomic) BOOL supportDirectionRightToLeft;
@property (readonly, nonatomic) BOOL allowToChangeEnablingState;
@property (readonly, nonatomic) BOOL shouldGrayOutInputSourceItem;
@property (readonly, nonatomic) NSColor *textColor;

+ (id)inputSources;
+ (id)sortedInputSources;
+ (void)syncEnabledInputSourceToOD;
+ (id)HIToolboxUserDefaults;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInputSource:(struct __TISInputSource { } *)a0 parentInputSource:(struct __TISInputSource { } *)a1;
- (id)initWithHandwritingLanguage:(id)a0;

@end
