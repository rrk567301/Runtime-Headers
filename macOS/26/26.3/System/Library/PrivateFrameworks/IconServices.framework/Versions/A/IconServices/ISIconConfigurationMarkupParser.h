@class NSDictionary, NSString;

@interface ISIconConfigurationMarkupParser : NSObject

@property (readonly) NSDictionary *configDict;
@property (readonly) NSString *symbolName;

- (void).cxx_destruct;
- (id)colorsForKey:(id)a0;
- (id)initWithConfigurationDictionary:(id)a0;

@end
