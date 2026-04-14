@class NSString;

@interface NSBoundKeyPath : NSObject {
    id _rootObject;
    NSString *_keyPath;
}

@property id rootObject;
@property (readonly) NSString *keyPath;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)keyPathWithRootObject:(id)a0 path:(const char *)a1;
+ (id)newKeyPathWithRootObject:(id)a0 keyPathString:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setValue:(id)a0;
- (id)value;
- (void)dealloc;
- (id)mutableSetValue;
- (id)mutableArrayValue;
- (id)mutableOrderedSetValue;
- (BOOL)validateValue:(inout id *)a0 error:(out id *)a1;

@end
