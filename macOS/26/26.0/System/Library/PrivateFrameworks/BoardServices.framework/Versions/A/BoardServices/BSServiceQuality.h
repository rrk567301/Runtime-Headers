@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {
    NSString *_serviceClassName;
    BOOL _singleton;
    BOOL _main;
}

@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, nonatomic) int relativePriority;

+ (id)utility;
+ (id)background;
+ (id)main;
+ (id)userInteractive;
+ (id)serviceWithClass:(unsigned int)a0;
+ (id)serviceWithClass:(unsigned int)a0 relativePriority:(int)a1;
+ (id)userInitiated;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
