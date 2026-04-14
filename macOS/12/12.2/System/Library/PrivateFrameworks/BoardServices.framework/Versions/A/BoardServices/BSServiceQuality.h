@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {
    NSString *_serviceClassName;
    BOOL _singleton;
    BOOL _main;
}

@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, nonatomic) int relativePriority;

+ (id)main;
+ (id)utility;
+ (id)background;
+ (id)serviceWithClass:(unsigned int)a0;
+ (id)userInitiated;
+ (id)userInteractive;
+ (id)serviceWithClass:(unsigned int)a0 relativePriority:(int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
