@class NSString;

@interface ASDTIPCAudioNumericProperty : ASDTIPCAudioCustomProperty <ASDTConcreteCustomProperty, ASDTNumericProperty>

@property (nonatomic) int numericType;
@property (nonatomic) BOOL isVector;
@property (nonatomic) unsigned char dataElementSize;
@property (nonatomic) unsigned int dataElementCount;
@property (nonatomic) unsigned int ipcAudioDataSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
