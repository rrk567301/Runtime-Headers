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

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)value;
- (void)setValue:(id)a0;
- (void)dealloc;
- (id)mutableSetValue;
- (id)mutableArrayValue;
- (id)mutableOrderedSetValue;
- (BOOL)validateValue:(inout id *)a0 error:(out id *)a1;

@end
