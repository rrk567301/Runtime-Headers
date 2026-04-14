@class NSString, NSPredicate;

@interface WADeviceAnalytics_Entity_Property : NSObject

@property (retain) NSString *propertyPath;
@property unsigned long long useAs;
@property (retain) NSPredicate *filterPredicate;

+ (id)propertyUsedAsFilterIn:(id)a0;
+ (id)propertyWith:(id)a0;
+ (id)useAsDescription:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dontUseProperty;

@end
