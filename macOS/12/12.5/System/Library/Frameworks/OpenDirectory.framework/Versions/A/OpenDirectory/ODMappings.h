@class NSString, NSDictionary, NSArray, NSMutableDictionary;

@interface ODMappings : NSObject {
    NSMutableDictionary *recordTypes;
}

@property (readonly, copy) NSDictionary *dictionary;
@property (copy) NSString *comment;
@property (copy) NSString *templateName;
@property (copy) NSString *identifier;
@property (readonly, copy) NSArray *recordTypes;
@property (copy) NSString *function;
@property (copy) NSArray *functionAttributes;

+ (id)mappingsFromDictionary:(id)a0;
+ (id)mappings;

- (void)dealloc;
- (id)init;
- (id)recordTypes;
- (id)recordMapForStandardRecordType:(id)a0;
- (void)setRecordMap:(id)a0 forStandardRecordType:(id)a1;

@end
