@interface CoreDiagnostics.CrashPatternInfo : CoreDiagnostics.PatternInfo {
    void /* unknown type, empty encoding */ procName;
    void /* unknown type, empty encoding */ threads;
    void /* unknown type, empty encoding */ usedImages;
    void /* unknown type, empty encoding */ uid;
    void /* unknown type, empty encoding */ codeSigningValidationCategory;
    void /* unknown type, empty encoding */ codeSigningFlags;
    void /* unknown type, empty encoding */ codeSigningID;
    void /* unknown type, empty encoding */ coalitionName;
    void /* unknown type, empty encoding */ exceptionType;
    void /* unknown type, empty encoding */ exceptionCode0;
    void /* unknown type, empty encoding */ exceptionCode1;
}

- (void).cxx_destruct;
- (id)init;

@end
