@class NSWindow;

@interface DKTaskIntegrityCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property char mdmInitiated;
@property char deKOTAInitiated;
@property char buddyInitiated;

+ (char)isIntegralAndMDMInitiated:(char)a0 withError:(id *)a1;
+ (char)isIntegralWithError:(id *)a0;

- (void).cxx_destruct;
- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (char)needsToRun;
- (char)runWithError:(id *)a0;
- (id)initWithHostWindow:(id)a0 mdmInitiated:(char)a1 deKOTAInitiated:(char)a2 buddyInitiated:(char)a3;
- (id)initWithHostWindow:(id)a0 mdmInitiated:(char)a1;

@end
