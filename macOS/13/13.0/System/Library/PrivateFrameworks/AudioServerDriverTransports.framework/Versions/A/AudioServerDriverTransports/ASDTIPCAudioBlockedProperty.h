@class NSMutableData;

@interface ASDTIPCAudioBlockedProperty : ASDTIPCAudioCustomProperty

@property (nonatomic) unsigned int blockSize;
@property (nonatomic) BOOL getPropertyCRC;
@property (retain, nonatomic) NSMutableData *temporaryData;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 propertyDataType:(unsigned int)a1 qualifierDataType:(unsigned int)a2;
- (BOOL)setPropertyWithData:(id)a0;
- (id)getPropertyWithSize:(unsigned long long)a0;

@end
