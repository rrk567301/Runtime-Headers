@class NSPredicate;

@interface AMSmartGroup : AMGroup {
    unsigned long long _itemLimit;
}

@property (copy, nonatomic) NSPredicate *predicate;
@property BOOL hasItemLimit;
@property (nonatomic) unsigned long long itemLimit;

- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assets;
- (void).cxx_destruct;

@end
