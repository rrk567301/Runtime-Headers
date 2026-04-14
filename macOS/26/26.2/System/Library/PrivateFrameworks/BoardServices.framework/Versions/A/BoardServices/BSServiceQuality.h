@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {
    NSString *_serviceClassName;
    BOOL _singleton;
    BOOL _main;
}

@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, nonatomic) int relativePriority;

+ (id)background;
+ (id)serviceWithClass:(unsigned int)a0 relativePriority:(int)a1;
+ (id)userInitiated;
+ (id)main;
+ (id)utility;
+ (id)serviceWithClass:(unsigned int)a0;
+ (id)userInteractive;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;

@end
