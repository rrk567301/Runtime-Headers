@class _SwiftDiagnosticPatternMatching;

@interface objcDiagnosticPatternMatching : NSObject {
    _SwiftDiagnosticPatternMatching *_swiftDiagnosticPatternMatching;
}

- (void).cxx_destruct;
- (id)initWithType:(int)a0;
- (int)getMatcherType;
- (id)initWithSwiftDiagnosticPatternMatching:(id)a0;
- (BOOL)isPatternPayloadAvailable;
- (BOOL)lookForPattern:(id)a0 :(BOOL)a1;
- (void)lookForPatternAsync:(id)a0 :(BOOL)a1 :(id /* block */)a2;

@end
