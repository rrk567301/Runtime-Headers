@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {
    NSString *_serviceClassName;
    BOOL _singleton;
    BOOL _main;
}

@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, nonatomic) int relativePriority;

+ (id)background;
+ (id)utility;
+ (id)main;
+ (id)serviceWithClass:(unsigned int)a0;
+ (id)userInitiated;
+ (id)userInteractive;
+ (id)serviceWithClass:(unsigned int)a0 relativePriority:(int)a1;

- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
