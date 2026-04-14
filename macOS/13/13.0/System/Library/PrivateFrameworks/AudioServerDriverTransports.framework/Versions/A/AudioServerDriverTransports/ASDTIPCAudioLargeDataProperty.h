@class NSData, NSString;

@interface ASDTIPCAudioLargeDataProperty : ASDTIPCAudioBlockedProperty <ASDTConcreteCustomProperty>

@property (nonatomic) unsigned int dataSize;
@property (retain, nonatomic) NSData *propertyValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfPropertyValue;

- (id)initWithConfig:(id)a0;
- (id)propertyValue;
- (unsigned int)dataSizeWithQualifierSize:(unsigned int)a0 andQualifierData:(const void *)a1;
- (BOOL)getPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int *)a2 andData:(void *)a3 forClient:(int)a4;
- (BOOL)setPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int)a2 andData:(const void *)a3 forClient:(int)a4;
- (BOOL)setPropertyValueWithResult:(id)a0;
- (void)setPropertyValue:(id)a0;

@end
