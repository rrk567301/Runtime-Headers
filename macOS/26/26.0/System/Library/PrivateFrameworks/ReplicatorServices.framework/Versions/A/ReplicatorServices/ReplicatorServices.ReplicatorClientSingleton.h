@interface ReplicatorServices.ReplicatorClientSingleton : NSObject <ReplicatorServices.ReplicationXPCClient> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_recordChangePublisher;
    void /* unknown type, empty encoding */ _recordChangePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messagePublisher;
    void /* unknown type, empty encoding */ _messagePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_devicePublisher;
    void /* unknown type, empty encoding */ _devicePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pairedDevicePublisher;
    void /* unknown type, empty encoding */ _pairedDevicePublisher;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_clientDescriptors;
    void /* unknown type, empty encoding */ queue_zoneChangeTokens;
    void /* unknown type, empty encoding */ queue_messageTokens;
    void /* unknown type, empty encoding */ queue_deviceToken;
    void /* unknown type, empty encoding */ queue_devices;
    void /* unknown type, empty encoding */ queue_localDeviceID;
    void /* unknown type, empty encoding */ queue_recordVersions;
    void /* unknown type, empty encoding */ queue_internalRecordIDToClientDefinedID;
    void /* unknown type, empty encoding */ queue_hasFetchedDevices;
    void /* unknown type, empty encoding */ queue_hasFetchedRecordVersions;
    void /* unknown type, empty encoding */ queue_recordFetchPending;
    void /* unknown type, empty encoding */ queue_messageFetchPending;
    void /* unknown type, empty encoding */ queue_deviceFetchPending;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleRecordChangesWithParameters:(id)a0;

@end
