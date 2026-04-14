@class NSDictionary, NSBundle;
@protocol CIPlugInRegistration;

@interface CIPlugIn : NSObject {
    void *_priv[8];
}

@property (retain, nonatomic) NSBundle *plugInBundle;
@property (nonatomic) int loadStatus;
@property (retain, nonatomic) NSDictionary *descriptionDictionary;
@property (nonatomic) long long flags;
@property (retain, nonatomic) id<CIPlugInRegistration> pluginLoader;
@property (readonly, retain, nonatomic) NSDictionary *filtersDictionary;

+ (void)loadNonExecutablePlugIns;
+ (void)loadAllPlugIns;
+ (void)loadPlugIn:(id)a0 allowNonExecutable:(BOOL)a1;
+ (void)loadPlugIn:(id)a0 allowExecutableCode:(BOOL)a1;
+ (void)loadNonExecutablePlugIn:(id)a0;
+ (void)addPlugInAtURL:(id)a0 flags:(int)a1;
+ (id)uniqueIdentifierForFileAtURL:(id)a0;
+ (id)imageUnitDirectoryURLs;
+ (BOOL)hasPluginWithIdentifier:(id)a0;
+ (void)addAllPlugInsAtURL:(id)a0 flags:(int)a1;
+ (void)scanForPlugInsWithFlags:(int)a0;
+ (BOOL)isPlugInAlreadyLoadedAtURL:(id)a0;

- (void)dealloc;
- (id)initWithURL:(id)a0 flags:(int)a1;
- (int)loadPlugIn;

@end
