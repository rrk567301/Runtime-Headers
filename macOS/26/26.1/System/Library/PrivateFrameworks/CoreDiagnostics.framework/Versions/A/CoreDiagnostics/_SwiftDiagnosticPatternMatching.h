@interface _SwiftDiagnosticPatternMatching : NSObject {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ patternMatcher;
    void /* unknown type, empty encoding */ asyncQueue;
}

- (id)initWithType:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)lookForPattern:(id)a0;
- (int)getMatcherType;
- (BOOL)isPatternPayloadAvailable;
- (void)lookForPatternAsync:(id)a0 :(id /* block */)a1;

@end
