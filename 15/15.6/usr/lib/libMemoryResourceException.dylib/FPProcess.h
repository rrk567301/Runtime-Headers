@class NSString, NSArray, NSDictionary, NSMutableArray, FPSharedCache;

@interface FPProcess : NSObject {
    NSMutableArray *_errors;
    NSMutableArray *_warnings;
    NSMutableArray *_globalErrors;
}

@property (nonatomic) char is64bit;
@property (nonatomic) char isTranslated;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) unsigned long long pageSize;
@property (retain, nonatomic) NSArray *memoryRegions;
@property (retain, nonatomic) FPSharedCache *sharedCache;
@property (nonatomic) int pid;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int idleExitStatus;
@property (readonly, nonatomic) int priority;
@property (nonatomic) char hiddenFromDisplay;
@property (readonly, nonatomic) NSDictionary *auxData;
@property (readonly, nonatomic) char breakDownPhysFootprint;

+ (id)processWithPid:(int)a0;
+ (id)_nameForBsdInfo:(struct proc_bsdinfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[32]; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; unsigned long long x20; unsigned long long x21; } *)a0;
+ (id)allProcessesExcludingPids:(id)a0;
+ (id)childPidsForPids:(id)a0;
+ (id)pidsForStringDescriptions:(id)a0 errors:(id *)a1;
+ (id)processWithBsdInfo:(struct proc_bsdinfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[32]; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; unsigned long long x20; unsigned long long x21; } *)a0;
+ (id)removeIdleExitCleanProcessesFrom:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)warnings;
- (id)errors;
- (unsigned long long)_gatherPageSize;
- (void)_addGlobalError:(id)a0;
- (char)_isAlive;
- (char)_populateTask;
- (id)asNumber;
- (id)extendedInfoForRegionType:(int)a0 at:(unsigned long long)a1 extendedInfoProvider:(id)a2;
- (void)gatherData;
- (void)gatherData:(unsigned long long)a0 extendedInfoProvider:(id)a1;
- (id)globalErrors;
- (id)initWithBsdInfo:(struct proc_bsdinfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[32]; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; unsigned long long x20; unsigned long long x21; } *)a0;

@end
