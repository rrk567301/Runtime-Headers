@interface CLServiceSessionDiagnostic : NSObject {
    unsigned long long _diagnostics;
}

@property (readonly, nonatomic) char authorizationDenied;
@property (readonly, nonatomic) char authorizationDeniedGlobally;
@property (readonly, nonatomic) char authorizationRestricted;
@property (readonly, nonatomic) char insufficientlyInUse;
@property (readonly, nonatomic) char serviceSessionRequired;
@property (readonly, nonatomic) char fullAccuracyDenied;
@property (readonly, nonatomic) char alwaysAuthorizationDenied;
@property (readonly, nonatomic) char authorizationRequestInProgress;

- (void)dealloc;
- (id)initWithDiagnostics:(unsigned long long)a0;

@end
