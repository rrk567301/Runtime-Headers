@class TPSTipStatusController;

@interface TPSContentStatusEventsProvider : TPSEventsProvider {
    TPSTipStatusController *_tipStatusController;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)_isStatusType:(long long)a0 observedInStatus:(id)a1;
- (BOOL)_isStatusType:(long long)a0 observedInStatuses:(id)a1;
- (void)queryEvents:(id)a0;

@end
