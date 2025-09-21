@class NSString;

@interface DRSLog : NSObject

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) char transferOwnership;
@property (readonly, nonatomic) char isAvailableOnDisk;

+ (id)entityName;
+ (Class)_moClass;

- (id)debugDescription;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fileDescription;
- (void)_configureLogMO:(id)a0;
- (char)_deleteOnDiskLog;
- (char)_getSizeFromPath;
- (id)_initWithLogMO_ON_MOC_QUEUE:(id)a0;
- (id)_initWithLogPath:(id)a0 transferOwnership:(char)a1;
- (id)_initWithLogPath:(id)a0 transferOwnership:(char)a1 size:(unsigned long long)a2;

@end
