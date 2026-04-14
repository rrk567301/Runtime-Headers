@class NSMutableData, NSString;

@interface ASDTRawProperty : ASDTCustomProperty <ASDTConcreteCustomProperty>

@property (nonatomic) unsigned int maxDataSize;
@property (retain, nonatomic) NSMutableData *rawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)propertyValue;
- (BOOL)checkPropertyValue:(id)a0;
- (void)storePropertyValue:(id)a0;

@end
