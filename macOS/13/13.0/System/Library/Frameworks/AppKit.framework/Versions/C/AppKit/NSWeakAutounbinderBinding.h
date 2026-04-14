@class NSString, NSObject;

@interface NSWeakAutounbinderBinding : NSObject {
    NSString *_name;
    NSObject *_boundObject;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 boundObject:(id)a1;

@end
