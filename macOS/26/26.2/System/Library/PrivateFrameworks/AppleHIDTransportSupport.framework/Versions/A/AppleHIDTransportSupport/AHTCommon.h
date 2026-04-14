@class NSString;

@interface AHTCommon : NSObject

@property (readonly, nonatomic) unsigned int service;
@property (readonly, nonatomic) unsigned int connect;
@property (copy, nonatomic) NSString *name;

- (unsigned long long)registryID;
- (BOOL)open;
- (void)close;
- (BOOL)reset;
- (void).cxx_destruct;
- (BOOL)setPower:(long long)a0;
- (id)initWithService:(unsigned int)a0;
- (void)dealloc;
- (id)getBootLoader;
- (BOOL)getPower:(long long *)a0;

@end
