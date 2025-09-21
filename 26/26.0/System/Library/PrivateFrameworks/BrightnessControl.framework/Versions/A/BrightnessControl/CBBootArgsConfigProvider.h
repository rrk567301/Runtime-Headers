@class NSString, NSObject;
@protocol OS_os_log;

@interface CBBootArgsConfigProvider : NSObject <CBPrimitiveConfigurationProvider>

@property (readonly) NSString *bootargs;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (unsigned long long)loadIOFixedArray:(id)a0 toDestination:(float **)a1;
- (id)initWithBootArgs:(const char *)a0;
- (BOOL)loadFixedFloat:(id)a0 toDestination:(float *)a1;
- (BOOL)loadFixedFloat:(id)a0 withScaler:(float)a1 toDestination:(float *)a2;
- (BOOL)loadFloat:(id)a0 toDestination:(float *)a1;
- (unsigned long long)loadFloatArray:(id)a0 toDestination:(float **)a1;
- (unsigned long long)loadInt16Array:(id)a0 toDestination:(short **)a1;
- (BOOL)loadInt:(id)a0 toDestination:(int *)a1;
- (BOOL)loadUint:(id)a0 toDestination:(unsigned int *)a1;
- (unsigned long long)loadUintArray:(id)a0 toDestination:(unsigned int **)a1;

@end
