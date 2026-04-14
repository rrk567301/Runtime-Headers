@interface CoreDiagnostics.CrashPatternInfo : CoreDiagnostics.PatternInfo {
    void /* unknown type, empty encoding */ procName;
    void /* unknown type, empty encoding */ threads;
    void /* unknown type, empty encoding */ usedImages;
}

- (void).cxx_destruct;
- (id)init;

@end
