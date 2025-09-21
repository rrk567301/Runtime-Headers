@class _SwiftDiagnosticPatternMatching;

@interface objcDiagnosticPatternMatching : NSObject {
    _SwiftDiagnosticPatternMatching *_swiftDiagnosticPatternMatching;
}

- (void).cxx_destruct;
- (id)initWithType:(int)a0;
- (char)lookForPattern:(id)a0;
- (int)getMatcherType;
- (id)initWithSwiftDiagnosticPatternMatching:(id)a0;
- (char)isPatternPayloadAvailable;
- (void)lookForPatternAsync:(id)a0 :(id /* block */)a1;

@end
