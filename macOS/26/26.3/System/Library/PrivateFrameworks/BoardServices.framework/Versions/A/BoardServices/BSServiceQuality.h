@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {
    NSString *_serviceClassName;
    BOOL _singleton;
    BOOL _main;
}

@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, nonatomic) int relativePriority;

+ (id)background;
+ (id)serviceWithClass:(unsigned int)a0;
+ (id)userInteractive;
+ (id)utility;
+ (id)main;
+ (id)serviceWithClass:(unsigned int)a0 relativePriority:(int)a1;
+ (id)userInitiated;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
