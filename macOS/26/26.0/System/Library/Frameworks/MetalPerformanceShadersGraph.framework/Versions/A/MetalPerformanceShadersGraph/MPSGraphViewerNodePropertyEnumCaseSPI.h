@class NSString;

@interface MPSGraphViewerNodePropertyEnumCaseSPI : MPSGraphObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long value;

- (id)jsonDictionary;
- (id)initWithName:(id)a0 value:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0;

@end
