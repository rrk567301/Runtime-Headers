@class NSString, NSObject;

@interface NSWeakAutounbinderBinding : NSObject {
    NSString *_name;
    NSObject *_boundObject;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithName:(id)a0 boundObject:(id)a1;

@end
