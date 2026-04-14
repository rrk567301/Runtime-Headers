@class NSPredicate;

@interface AMSmartGroup : AMGroup {
    unsigned long long _itemLimit;
}

@property (copy, nonatomic) NSPredicate *predicate;
@property BOOL hasItemLimit;
@property (nonatomic) unsigned long long itemLimit;

- (id)propertyListRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPropertyListRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)assets;

@end
