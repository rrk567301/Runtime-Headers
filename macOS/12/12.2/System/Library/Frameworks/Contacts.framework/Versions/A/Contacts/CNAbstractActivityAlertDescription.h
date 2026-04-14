@class NSString;

@interface CNAbstractActivityAlertDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activity;
- (Class)valueClass;
- (id)valueFromCoreDataContact:(id)a0;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;

@end
