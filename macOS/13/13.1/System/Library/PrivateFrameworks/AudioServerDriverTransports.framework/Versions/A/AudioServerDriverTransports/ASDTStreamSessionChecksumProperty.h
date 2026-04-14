@class NSString;

@interface ASDTStreamSessionChecksumProperty : ASDTStreamSessionProperty <ASDTConcreteCustomProperty>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (id)propertyValue;

@end
