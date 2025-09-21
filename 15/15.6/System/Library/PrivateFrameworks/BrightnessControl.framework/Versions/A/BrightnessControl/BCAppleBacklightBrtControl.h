@interface BCAppleBacklightBrtControl : BCBrtControl {
    unsigned int _backlightService;
    double _minUser;
    double _maxUser;
    double _minMilliAmps;
    double _maxMilliAmps;
    double _maxNitsEDR;
    char _isDFR;
    char _isDCP;
    char _override;
    char _energySaving;
    unsigned long long _thermalMitigation;
    struct { id /* block */ x0; } *_terminationCallback;
    struct IONotificationPort { } *_terminationNotifPort;
    unsigned int _terminationIterator;
}

@property (readonly) unsigned long long registryID;

+ (id)copyAvailableControls;
+ (id)newMonitorWithHandler:(id /* block */)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (id)initWithService:(unsigned int)a0;
- (id)ID;
- (id)copyProperty:(id)a0 error:(id *)a1;
- (id)copyModuleIdentifier;
- (double)getNitsWithError:(id *)a0;
- (char)parseAuroraCapabilities;
- (void)setDisplayService:(unsigned int)a0;
- (char)setNits:(double)a0 error:(id *)a1;
- (char)setProperty:(id)a0 value:(id)a1 error:(id *)a2;

@end
