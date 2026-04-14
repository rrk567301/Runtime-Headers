@class NSArray, ODMappings, NSString, NSMutableDictionary;

@interface ODModuleEntry : NSObject {
    NSArray *supportedOptions;
    NSMutableDictionary *options;
}

@property (retain) ODMappings *mappings;
@property (readonly, copy) NSArray *supportedOptions;
@property (copy) NSString *name;
@property (copy) NSString *xpcServiceName;
@property (copy) NSString *uuidString;

+ (id)moduleEntryWithName:(id)a0 xpcServiceName:(id)a1;
+ (id)moduleWithDictionary:(id)a0;

- (void)dealloc;
- (void)setOption:(id)a0 value:(id)a1;
- (id)init;
- (id)dictionary;
- (id)option:(id)a0;

@end
