@class NSString, NSSet, NSMutableSet;

@interface ObjCObjectClassEntry : NSObject {
    NSString *_clsName;
    NSMutableSet *_objects;
}

@property (readonly) NSString *clsName;
@property (readonly) NSSet *objects;

- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithClass:(Class)a0;

@end
