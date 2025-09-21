@class NSString, NSArray, QCStringPort, NSMutableArray;

@interface QCStringFormat : QCPatch {
    NSString *_format;
    int _mode;
    NSArray *_formatComponents;
    QCStringPort *_stringPort;
    NSMutableArray *_stringPorts;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (id)format;
- (void)setFormat:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
