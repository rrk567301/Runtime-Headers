@class NSTimeZone, CALAbstractEntity;

@interface CALvCALParseState : NSObject {
    int _context;
    long long _version;
    int _lineNumber;
    BOOL _palmImport;
    int _error;
    NSTimeZone *_globalTZ;
}

@property (retain) CALAbstractEntity *currentEntity;

- (id)init;
- (void).cxx_destruct;
- (int)error;
- (long long)version;
- (void)setError:(int)a0;
- (void)setVersion:(long long)a0;
- (int)context;
- (void)setContext:(int)a0;
- (void)setLineNumber:(int)a0;
- (int)getLineNumber;
- (id)globalTZ;
- (void)setPalmImport:(BOOL)a0;
- (BOOL)palmImport;
- (void)setVersionMaj:(int)a0 andMin:(int)a1;
- (void)setGlobalTZ:(id)a0;
- (void)setGlobalTZFromString:(id)a0;

@end
