@interface _SwiftDiagnosticPatternMatching : NSObject {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ patternMatcher;
    void /* unknown type, empty encoding */ asyncQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(int)a0;
- (int)getMatcherType;
- (BOOL)isPatternPayloadAvailable;
- (BOOL)lookForPattern:(id)a0 :(BOOL)a1;
- (void)lookForPatternAsync:(id)a0 :(BOOL)a1 :(id /* block */)a2;

@end
