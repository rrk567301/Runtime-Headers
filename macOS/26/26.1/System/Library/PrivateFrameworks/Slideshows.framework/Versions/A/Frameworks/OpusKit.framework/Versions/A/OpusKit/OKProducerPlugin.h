@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {
    Class _producerClass;
    long long _loadCounter;
    NSArray *_loadedClasses;
}

@property (retain, nonatomic) OKProducerContent *content;

- (id)contentIdentifier;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (unsigned long long)family;
- (BOOL)isLoaded;
- (id)initWithURL:(id)a0;
- (id)localizedName;
- (void)dealloc;
- (BOOL)_load;
- (id)init;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (void)_unload;
- (id)supportedResolutions;
- (id)audioURLs;
- (void)_bundleDidLoad:(id)a0;
- (BOOL)hasLoadedClass:(Class)a0;
- (id)exportedClassNames;
- (BOOL)hasExportedClass:(Class)a0;
- (BOOL)loadRetain;
- (double)minimumContentVersion;
- (id)producerWithDocument:(id)a0;
- (void)setupJavascriptContext:(id)a0;
- (void)unloadRelease;

@end
