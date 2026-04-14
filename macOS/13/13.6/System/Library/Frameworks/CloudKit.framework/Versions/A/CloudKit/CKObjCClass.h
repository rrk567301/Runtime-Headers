@class NSString, NSDictionary, NSArray;

@interface CKObjCClass : NSObject {
    NSDictionary *_propertiesByName;
    NSArray *_sortedProperties;
}

@property (readonly, nonatomic) Class handle;
@property (readonly, nonatomic) NSString *name;

+ (id)classForObject:(id)a0;
+ (id)classForHandle:(Class)a0;

- (void).cxx_destruct;
- (id)initWithHandle:(Class)a0;
- (id)allProperties;
- (id)propertyForName:(id)a0;

@end
