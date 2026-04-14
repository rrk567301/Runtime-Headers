@class NSString;

@interface ASDTCustomProperty : ASDCustomProperty

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int propertyValueSize;
@property (retain, nonatomic) id propertyValue;

+ (BOOL)automaticallyNotifiesObserversOfValue;
+ (BOOL)automaticallyNotifiesObserversOfPropertyValue;
+ (id)customPropertyForConfig:(id)a0;
+ (id)consolidatePList:(id)a0;

- (void).cxx_destruct;
- (id)propertyName;
- (unsigned int)dataSizeWithQualifierSize:(unsigned int)a0 andQualifierData:(const void *)a1;
- (BOOL)getPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int *)a2 andData:(void *)a3 forClient:(int)a4;
- (BOOL)setPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int)a2 andData:(const void *)a3 forClient:(int)a4;
- (id)initWithConfig:(id)a0 propertyDataType:(unsigned int)a1 qualifierDataType:(unsigned int)a2;
- (BOOL)checkPropertyValue:(id)a0;
- (void)storePropertyValue:(id)a0;
- (BOOL)checkAndSetPropertyValue:(id)a0;

@end
