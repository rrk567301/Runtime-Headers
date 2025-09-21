@class QCBooleanPort, QCStringPort;

@interface QCStringReplace : QCPatch {
    QCStringPort *inputSourceString;
    QCStringPort *inputSearchString;
    QCStringPort *inputReplaceString;
    QCBooleanPort *inputCaseSensitive;
    QCStringPort *outputString;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
