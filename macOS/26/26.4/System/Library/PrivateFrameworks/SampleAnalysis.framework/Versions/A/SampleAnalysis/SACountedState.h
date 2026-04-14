@interface SACountedState : NSObject <NSCopying> {
    unsigned char _cpuNumOffByOne;
}

@property unsigned long long vmFaultIntervalPages;
@property (readonly) unsigned short vmFaultType;
@property (readonly) unsigned short vmFaultFlags;
@property unsigned long long pageGrabIntervalPages;
@property (readonly) unsigned short pageGrabVMTag;
@property (readonly) unsigned char pageGrabFlags;
@property (readonly) unsigned short cpuSpeedMhz;
@property (readonly) BOOL hasCPUNum;
@property (readonly) unsigned int cpuNum;
@property (readonly) unsigned long long pmiCycleInterval;
@property (readonly) BOOL pCore;
@property (readonly) BOOL mCore;
@property (readonly) BOOL eCore;
@property (readonly) BOOL running;
@property (readonly) BOOL runnable;
@property (readonly) BOOL suspended;

- (id)debugDescription;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithThreadState:(id)a0 sampleStore:(id)a1 printOptions:(id)a2 haveAnyOnlyPMIMicrostackshots:(BOOL)a3 pmiCycleIntervalChanges:(BOOL)a4 haveAnyOnlyVMFaultMicrostackshots:(BOOL)a5 vmFaultIntervalChanges:(BOOL)a6 haveAnyOnlyPageGrabMicrostackshots:(BOOL)a7 pageGrabIntervalChanges:(BOOL)a8;
- (void)setCpuNum:(unsigned int)a0;

@end
