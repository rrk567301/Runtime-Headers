@class ASDTStreamSession;

@interface ASDTStreamSessionProperty : ASDTCustomProperty

@property (nonatomic) BOOL isRemote;
@property (readonly, nonatomic) ASDTStreamSession *streamSession;

- (id)streamSession;
- (id)initWithConfig:(id)a0 propertyDataType:(unsigned int)a1 qualifierDataType:(unsigned int)a2;

@end
