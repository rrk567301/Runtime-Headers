@class NSString, NSPredicate;

@interface VSSubscriptionFetchOptionDescription : NSObject <NSCopying>

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic, getter=isContainer) BOOL container;
@property (nonatomic) unsigned long long minCount;
@property (retain, nonatomic) Class allowedClass;
@property (copy, nonatomic) NSPredicate *allowedValuePredicate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
