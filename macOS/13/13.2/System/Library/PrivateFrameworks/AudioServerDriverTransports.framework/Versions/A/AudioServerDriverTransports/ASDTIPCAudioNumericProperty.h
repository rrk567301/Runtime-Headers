@class NSData, NSString;

@interface ASDTIPCAudioNumericProperty : ASDTIPCAudioCustomProperty <ASDTConcreteCustomProperty>

@property (nonatomic) int numericType;
@property (nonatomic) BOOL isVector;
@property (nonatomic) unsigned char dataElementSize;
@property (nonatomic) unsigned int dataElementCount;
@property (nonatomic) unsigned int ipcAudioDataSize;
@property (nonatomic) unsigned int externalDataSize;
@property (retain, nonatomic) id propertyValue;
@property (retain, nonatomic) NSData *propertyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfPropertyValue;
+ (BOOL)automaticallyNotifiesObserversOfPropertyData;

- (id)initWithConfig:(id)a0;
- (id)propertyData;
- (void)setPropertyData:(id)a0;
- (id)propertyValue;
- (unsigned int)dataSizeWithQualifierSize:(unsigned int)a0 andQualifierData:(const void *)a1;
- (BOOL)getPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int *)a2 andData:(void *)a3 forClient:(int)a4;
- (BOOL)setPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int)a2 andData:(const void *)a3 forClient:(int)a4;
- (void)setPropertyValue:(id)a0;
- (BOOL)setPropertyDataWithResult:(id)a0;

@end
