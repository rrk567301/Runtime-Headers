@class NSArray, NSMutableArray;

@interface SSPlistDataReader : NSObject {
    struct _MDPlistContainer { } *_container;
    struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } _obj;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSMutableArray *allKeys;
@property (readonly, nonatomic) NSArray *blocklist;

- (struct _MDPlistContainer { } *)container;
- (BOOL)doesBundleExistInAppAllowList:(id)a0;
- (long long)intValueForBundle:(id)a0 defaultValue:(long long)a1;
- (id)description;
- (long long)intValueForKey:(const char *)a0 defaultValue:(long long)a1;
- (id)initWithPlistContainer:(struct _MDPlistContainer { } *)a0;
- (id)initWithPlistContainer:(struct _MDPlistContainer { } *)a0 obj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a1;
- (void)dealloc;
- (double)doubleValueForBundle:(id)a0;
- (double)doubleValueForKey:(const char *)a0;

@end
