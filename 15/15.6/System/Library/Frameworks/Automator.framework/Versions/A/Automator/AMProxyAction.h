@class NSDate, NSString, NSArray, NSMutableDictionary, NSDictionary, AMCacheLocationEntry, NSBundle, NSImage, NSNumber;

@interface AMProxyAction : NSObject {
    NSImage *_icon;
}

@property (retain, nonatomic) NSMutableDictionary *cacheDictionary;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSNumber *deprecatedNumber;
@property (retain, nonatomic) NSArray *conversionPath;
@property (retain, nonatomic) id _realObject;
@property (retain, nonatomic) AMCacheLocationEntry *cacheLocationEntry;
@property (readonly, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) char isGenericAction;
@property (readonly, nonatomic) NSDictionary *acceptsDictionary;
@property (readonly, nonatomic) NSDictionary *providesDictionary;
@property (readonly, nonatomic) NSArray *requiredResources;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) char isDeprecated;
@property (readonly, nonatomic) NSDictionary *warningDictionary;
@property (readonly, nonatomic) NSString *iconPath;
@property (readonly, nonatomic) NSArray *unlocalizedApplications;
@property (readonly, nonatomic) NSImage *icon;
@property (readonly, nonatomic) NSImage *largeIcon;
@property (readonly, nonatomic) NSDictionary *descriptionDictionary;
@property (readonly, nonatomic) NSString *copyrightString;
@property (readonly, nonatomic) NSArray *replacementActions;
@property (readonly, nonatomic) unsigned long long useCount;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSArray *applications;
@property (nonatomic) long long conversionLabel;
@property (readonly, nonatomic) NSArray *_providesTypes;
@property (readonly, nonatomic) NSArray *_acceptsTypes;

- (void)forwardInvocation:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)valueForKey:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)keywords;
- (id)initWithAction:(id)a0;
- (id)categories;
- (void)fault;
- (id)_am_convertForSendingOverXPCWithWorkflow:(id)a0;
- (id)_descriptionViewItem;
- (char)_isPassThroughAction;
- (void)addToConversionPath:(id)a0;
- (char)canIgnoreInput;
- (void)clearConversionPath;
- (id)deprecatedReplacementActionsStringAsHTML:(char)a0;
- (char)handlesKey:(id)a0;
- (id)initWithCacheLocationEntry:(id)a0 bundleID:(id)a1;
- (char)isAMAction__;
- (char)isAMProxyAction__;
- (char)isCustomAction;
- (id)useCountNumber;

@end
