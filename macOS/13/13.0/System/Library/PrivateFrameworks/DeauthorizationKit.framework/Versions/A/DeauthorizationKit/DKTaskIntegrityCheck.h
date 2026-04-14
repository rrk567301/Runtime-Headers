@class NSWindow;

@interface DKTaskIntegrityCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property BOOL mdmInitiated;

+ (BOOL)isIntegralWithError:(id *)a0;
+ (BOOL)isIntegralAndMDMInitiated:(BOOL)a0 withError:(id *)a1;

- (void).cxx_destruct;
- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (BOOL)runWithError:(id *)a0;
- (id)initWithHostWindow:(id)a0 mdmInitiated:(BOOL)a1;
- (BOOL)needsToRun;

@end
