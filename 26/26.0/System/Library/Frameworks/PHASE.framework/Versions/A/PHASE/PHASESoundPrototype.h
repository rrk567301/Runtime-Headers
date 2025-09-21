@class NSArray, NSString, PHASEEngine, PHASESoundEventNodeAsset;

@interface PHASESoundPrototype : NSObject {
    PHASEEngine *_engine;
    PHASESoundEventNodeAsset *_programmaticAPIAsset;
}

@property (readonly) NSArray *mixerInformation;
@property (copy) NSString *assetIdentifier;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)deRegister;
- (id)initWithEngine:(id)a0 actionTreeRootNode:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 registeredActionTreeIdentifier:(id)a1 error:(id *)a2;
- (id)mixerInformation;

@end
