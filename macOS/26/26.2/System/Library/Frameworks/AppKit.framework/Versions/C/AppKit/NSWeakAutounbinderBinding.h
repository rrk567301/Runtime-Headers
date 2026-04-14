@class NSString, NSObject;

@interface NSWeakAutounbinderBinding : NSObject {
    NSString *_name;
    NSObject *_boundObject;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 boundObject:(id)a1;

@end
