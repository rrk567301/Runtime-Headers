@class NSDictionary, NSMutableDictionary;

@interface FI_TTableViewItem : NSObject <NSCopying> {
    struct TNSRef<NSMutableDictionary, void> { NSMutableDictionary *fRef; } _data;
}

@property (readonly, retain, nonatomic) NSDictionary *data;

+ (id)keyPathForKey:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)data;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
