@class QCNumberPort, QCBooleanPort;

@interface QCInfo : QCPatch {
    QCNumberPort *outputVersion;
    QCBooleanPort *outputSafeMode;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)setup:(id)a0;

@end
