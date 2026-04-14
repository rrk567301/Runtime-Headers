@class NSArray;

@interface FSActivationOptionSyntax : NSObject

@property (retain) NSArray *options;

+ (id)allOptionNames:(id)a0;
+ (id)argTypeFromDictionary:(id)a0;
+ (id)parseOptionFromData:(id)a0;
+ (id)stringForOption:(id)a0 inOptions:(id)a1;
+ (id)stringFromDictionary:(id)a0 key:(id)a1;
+ (id)systemMountOptions;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)optionWithName:(id)a0;
- (id)initWithAttributeData:(id)a0;
- (id)validateOptions:(id)a0;

@end
