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
+ (id)userInteractive;
+ (id)utility;
+ (id)serviceWithClass:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)dealloc;

@end
