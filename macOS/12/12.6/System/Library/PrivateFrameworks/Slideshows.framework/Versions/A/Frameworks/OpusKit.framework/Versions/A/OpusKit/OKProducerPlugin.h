@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {
    Class _producerClass;
    long long _loadCounter;
    NSArray *_loadedClasses;
}

@property (retain, nonatomic) OKProducerContent *content;

- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)a0;
- (id)localizedName;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (BOOL)isLoaded;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (BOOL)_load;
- (unsigned long long)family;
- (id)contentIdentifier;
- (void)_unload;
- (id)supportedResolutions;
- (id)audioURLs;
- (void)setupJavascriptContext:(id)a0;
- (BOOL)loadRetain;
- (void)unloadRelease;
- (id)producerWithDocument:(id)a0;
- (id)exportedClassNames;
- (BOOL)hasLoadedClass:(Class)a0;
- (double)minimumContentVersion;
- (void)_bundleDidLoad:(id)a0;
- (BOOL)hasExportedClass:(Class)a0;

@end
