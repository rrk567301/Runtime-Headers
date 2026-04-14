@class NSMutableDictionary, NSDictionary, NSString, NSArray;

@interface ODRecordMap : NSObject

@property (copy) NSMutableDictionary *attributes;
@property (readonly, copy) NSDictionary *dictionary;
@property (copy) NSString *native;
@property (copy) NSDictionary *odPredicate;
@property (readonly, copy) NSArray *standardAttributeTypes;

+ (id)recordMapFromDictionary:(id)a0;
+ (id)recordMap;

- (void)dealloc;
- (id)init;
- (id)standardAttributeTypes;
- (id)attributeMapForStandardAttribute:(id)a0;
- (void)setAttributeMap:(id)a0 forStandardAttribute:(id)a1;

@end
