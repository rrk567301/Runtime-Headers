@class NSString;

@interface AHTCommon : NSObject

@property (readonly, nonatomic) unsigned int service;
@property (readonly, nonatomic) unsigned int connect;
@property (copy, nonatomic) NSString *name;

- (void)dealloc;
- (BOOL)open;
- (void)close;
- (void).cxx_destruct;
- (BOOL)reset;
- (unsigned long long)registryID;
- (id)initWithService:(unsigned int)a0;
- (BOOL)setPower:(long long)a0;
- (BOOL)getPower:(long long *)a0;
- (id)getBootLoader;

@end
