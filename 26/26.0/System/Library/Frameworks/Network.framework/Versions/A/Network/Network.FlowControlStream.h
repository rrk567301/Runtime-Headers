@interface Network.FlowControlStream : Network.FlowControl {
    void /* unknown type, empty encoding */ receiveHighWaterMarkTime;
    void /* unknown type, empty encoding */ receiveHighWaterMarkCount;
    void /* unknown type, empty encoding */ receiveHighWaterMarkPreviousCount;
    void /* unknown type, empty encoding */ ackedMaxData;
    void /* unknown type, empty encoding */ bytesReceived;
}

@end
