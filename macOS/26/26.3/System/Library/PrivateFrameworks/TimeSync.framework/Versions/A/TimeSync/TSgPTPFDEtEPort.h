@class TSgPTPPortStatistics, _TSF_TSDgPTPFDEtEPort;

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort {
    _TSF_TSDgPTPFDEtEPort *_impl;
}

@property (retain, nonatomic) TSgPTPPortStatistics *statistics;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImplDC:(id)a0;

@end
