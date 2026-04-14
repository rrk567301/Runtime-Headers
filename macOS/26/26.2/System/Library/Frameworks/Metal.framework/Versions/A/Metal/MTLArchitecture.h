@class NSString;

@interface MTLArchitecture : NSObject <NSCopying>

@property (readonly) NSString *revision;
@property (readonly) int cpuType;
@property (readonly) int cpuSubtype;
@property (readonly) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCPUType:(int)a0 cpuSubtype:(int)a1;
- (id)initWithCPUType:(int)a0 cpuSubtype:(int)a1 revision:(id)a2;

@end
