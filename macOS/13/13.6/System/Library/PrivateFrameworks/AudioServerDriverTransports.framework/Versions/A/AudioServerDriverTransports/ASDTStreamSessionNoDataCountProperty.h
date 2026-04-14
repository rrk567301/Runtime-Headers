@class NSString;

@interface ASDTStreamSessionNoDataCountProperty : ASDTStreamSessionProperty <ASDTConcreteCustomProperty, ASDTNumericProperty>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int numericType;
@property (readonly, nonatomic) unsigned char dataElementSize;
@property (readonly, nonatomic) unsigned int dataElementCount;

- (id)initWithConfig:(id)a0;
- (id)retrievePropertyValue;

@end
