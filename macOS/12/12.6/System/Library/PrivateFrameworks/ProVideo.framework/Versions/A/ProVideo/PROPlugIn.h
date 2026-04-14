@interface PROPlugIn : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (struct __CFUUID { } *)uuid;
- (id)infoDictionary;
- (BOOL)isBlocked;
- (id)version;
- (id)displayName;
- (id)className;
- (id)bundle;
- (id)group;
- (id)helpURL;
- (void)setIsBlocked:(BOOL)a0;
- (id)infoString;
- (id)implementedProtocols;
- (void)setBlockedLookupKey:(id)a0 pluginName:(id)a1 version:(id)a2;
- (id)blockedLookupKey;
- (id)pluginKitPlug;
- (BOOL)isEqualToPlugIn:(id)a0;
- (id)plugInInstance;
- (Class)plugInClass;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 delegate:(id)a2;
- (id)sharedPlugInInstance;
- (id)apiUsedByPlugInForProtocol:(id)a0;

@end
