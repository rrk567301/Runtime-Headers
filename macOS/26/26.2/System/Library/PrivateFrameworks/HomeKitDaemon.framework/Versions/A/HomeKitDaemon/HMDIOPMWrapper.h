@class NSString;

@interface HMDIOPMWrapper : NSObject <HMDIOPM>

@property struct __CFDictionary { } *assertionsByPID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)iopmAssertionCreateWithDescription:(struct __CFString { } *)a0 name:(struct __CFString { } *)a1 details:(struct __CFString { } *)a2 humanReadableReason:(struct __CFString { } *)a3 localizationBundlePath:(struct __CFString { } *)a4 timeout:(double)a5 timeoutAction:(struct __CFString { } *)a6 iopmAssertionID:(unsigned int *)a7;
- (int)iopmUpdateAssertionsByProcess;

@end
