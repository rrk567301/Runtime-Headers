@class TPSTipStatusController;

@interface TPSContentStatusEventsProvider : TPSEventsProvider {
    TPSTipStatusController *_tipStatusController;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isStatus:(id)a0 observedForType:(long long)a1;
- (void)queryEvents:(id)a0;

@end
