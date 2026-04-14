@interface MCObjectBase : NSObject

@property (readonly, nonatomic) BOOL isSnapshot;

+ (void)initialize;
+ (void)addStringAttribute:(id)a0 toXMLElement:(id)a1 forName:(id)a2;
+ (void)addDictionaryElement:(id)a0 toXMLElement:(id)a1 forName:(id)a2;
+ (void)addDoubleAttribute:(double)a0 toXMLElement:(id)a1 forName:(id)a2;
+ (void)addFloatAttribute:(float)a0 toXMLElement:(id)a1 forName:(id)a2;
+ (void)addIntegerAttribute:(long long)a0 toXMLElement:(id)a1 forName:(id)a2;
+ (void)addArrayElement:(id)a0 toXMLElement:(id)a1 forName:(id)a2;

- (void)dealloc;
- (id)snapshot;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;

@end
