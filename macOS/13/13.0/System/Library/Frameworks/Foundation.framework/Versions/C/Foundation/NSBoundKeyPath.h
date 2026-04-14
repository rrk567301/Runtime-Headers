@class NSString;

@interface NSBoundKeyPath : NSObject {
    id _rootObject;
    NSString *_keyPath;
}

@property id rootObject;
@property (readonly) NSString *keyPath;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)newKeyPathWithRootObject:(id)a0 keyPathString:(id)a1;
+ (id)keyPathWithRootObject:(id)a0 path:(const char *)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)value;
- (BOOL)validateValue:(inout id *)a0 error:(out id *)a1;
- (void)setValue:(id)a0;
- (id)mutableArrayValue;
- (id)mutableOrderedSetValue;
- (id)mutableSetValue;

@end
