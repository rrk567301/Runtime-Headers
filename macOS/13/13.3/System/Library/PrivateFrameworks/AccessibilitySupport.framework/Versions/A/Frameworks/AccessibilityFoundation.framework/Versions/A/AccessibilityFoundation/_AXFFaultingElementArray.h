@class NSString, _AXFUIElementDataProvider;

@interface _AXFFaultingElementArray : _AXFFaultingArray <_AXFFaultingArrayDataSource>

@property (retain, nonatomic) _AXFUIElementDataProvider *_dataProvider;
@property (copy, nonatomic) NSString *_attribute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithDataProvider:(id)a0 attribute:(id)a1;
- (id)copyElementsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)elementsCount;
- (id)nilSentinel;

@end
