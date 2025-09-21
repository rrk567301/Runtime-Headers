@class NSString, NSArray, QCStringPort, NSMutableArray;

@interface QCStringFormat : QCPatch {
    NSString *_format;
    int _mode;
    NSArray *_formatComponents;
    QCStringPort *_stringPort;
    NSMutableArray *_stringPorts;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (BOOL)setState:(id)a0;
- (id)state;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)setFormat:(id)a0;
- (id)format;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
