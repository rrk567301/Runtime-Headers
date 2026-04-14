@interface RemoteDeviceQuery : NSObject

@property (nonatomic) unsigned int type;
@property (nonatomic) const char *name;
@property (nonatomic) char *uuid;
@property (nonatomic) const char *availableService;

+ (id)wildcard;

- (id)init;
- (id)description;
- (void)dealloc;
- (BOOL)matches:(id)a0 forMessage:(id)a1 log:(id)a2;

@end
