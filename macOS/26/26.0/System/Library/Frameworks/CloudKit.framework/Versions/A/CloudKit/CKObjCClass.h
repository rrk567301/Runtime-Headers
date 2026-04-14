@class NSString, NSArray;

@interface CKObjCClass : NSObject

@property (readonly, nonatomic) Class handle;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *properties;

+ (id)classForObject:(id)a0;
+ (id)classForHandle:(Class)a0;

- (id)propertyForName:(id)a0;
- (id)description;
- (id)initWithHandle:(Class)a0;
- (void).cxx_destruct;

@end
