@class NSData, NSString;

@interface ASDTRawProperty : ASDTCustomProperty <ASDTConcreteCustomProperty>

@property (retain, nonatomic) NSData *rawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
