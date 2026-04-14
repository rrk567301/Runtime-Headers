@class NSString;

@interface AHTCommon : NSObject

@property (readonly, nonatomic) unsigned int service;
@property (readonly, nonatomic) unsigned int connect;
@property (copy, nonatomic) NSString *name;

- (BOOL)open;
- (id)initWithService:(unsigned int)a0;
- (void).cxx_destruct;
- (unsigned long long)registryID;
- (BOOL)reset;
- (void)close;
- (void)dealloc;
- (BOOL)setPower:(long long)a0;
- (id)getBootLoader;
- (BOOL)getPower:(long long *)a0;

@end
