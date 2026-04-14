@class ASDTIOServiceID;

@interface ASDTIOService : NSObject

@property (nonatomic) unsigned int ioObject;
@property (retain, nonatomic) ASDTIOServiceID *idValue;

+ (id)forIOObject:(unsigned int)a0 andIDValue:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)retainIOService;
- (id)initForIOObject:(unsigned int)a0 andIDValue:(id)a1;
- (void)releaseIOService;

@end
