@class NSString;

@interface AHTCommon : NSObject

@property (readonly, nonatomic) unsigned int service;
@property (readonly, nonatomic) unsigned int connect;
@property (copy, nonatomic) NSString *name;

- (id)initWithService:(unsigned int)a0;
- (BOOL)reset;
- (void)dealloc;
- (BOOL)setPower:(long long)a0;
- (BOOL)open;
- (unsigned long long)registryID;
- (void)close;
- (void).cxx_destruct;
- (id)getBootLoader;
- (BOOL)getPower:(long long *)a0;

@end
