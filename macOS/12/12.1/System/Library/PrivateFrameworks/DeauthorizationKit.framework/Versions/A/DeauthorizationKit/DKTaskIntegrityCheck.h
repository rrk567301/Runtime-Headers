@class NSWindow;

@interface DKTaskIntegrityCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property BOOL mdmInitiated;

+ (BOOL)isIntegralAndMDMInitiated:(BOOL)a0 withError:(id *)a1;
+ (BOOL)isIntegralWithError:(id *)a0;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (void)runWithCompletion:(id /* block */)a0;
- (BOOL)runWithError:(id *)a0;
- (id)initWithHostWindow:(id)a0 mdmInitiated:(BOOL)a1;
- (BOOL)needsToRun;

@end
