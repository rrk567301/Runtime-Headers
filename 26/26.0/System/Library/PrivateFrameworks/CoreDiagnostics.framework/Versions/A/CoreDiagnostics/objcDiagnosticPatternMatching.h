@class _SwiftDiagnosticPatternMatching;

@interface objcDiagnosticPatternMatching : NSObject {
    _SwiftDiagnosticPatternMatching *_swiftDiagnosticPatternMatching;
}

- (id)initWithType:(int)a0;
- (void).cxx_destruct;
- (BOOL)lookForPattern:(id)a0;
- (int)getMatcherType;
- (id)initWithSwiftDiagnosticPatternMatching:(id)a0;
- (BOOL)isPatternPayloadAvailable;
- (void)lookForPatternAsync:(id)a0 :(id /* block */)a1;

@end
