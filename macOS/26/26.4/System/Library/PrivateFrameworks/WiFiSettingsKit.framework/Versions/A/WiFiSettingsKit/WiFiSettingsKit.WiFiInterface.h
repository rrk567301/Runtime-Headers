@interface WiFiSettingsKit.WiFiInterface : WiFiSettingsKit.StateObserverInterface {
    void /* unknown type, empty encoding */ cwfInterface;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ onScanResultsChanged;
    void /* unknown type, empty encoding */ onScanDidFinish;
    void /* unknown type, empty encoding */ _scanDidFinish;
    void /* unknown type, empty encoding */ monitoredEvents;
    void /* unknown type, empty encoding */ scanTask;
    void /* unknown type, empty encoding */ associationTask;
    void /* unknown type, empty encoding */ currentNetwork;
    void /* unknown type, empty encoding */ profiles;
    void /* unknown type, empty encoding */ currentLQM;
    void /* unknown type, empty encoding */ cachedWiFiUIStateFlags;
}

@end
