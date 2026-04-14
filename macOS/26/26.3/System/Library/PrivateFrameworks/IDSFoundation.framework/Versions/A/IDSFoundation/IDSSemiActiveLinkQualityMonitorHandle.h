@interface IDSSemiActiveLinkQualityMonitorHandle : NSObject <IDSLinkPacketQualityHandler> {
    void /* unknown type, empty encoding */ monitor;
}

@property (nonatomic, copy) id /* block */ syntheticPacketSender;

- (id)init;
- (void).cxx_destruct;
- (void *)prependQualityBytesToPacketIfNeeded:(void *)a0 packetHeadroomStart:(void *)a1 deduplicationID:(short)a2;
- (short)readQualityBytesFromPacketReturingDeduplicationID:(void *)a0 packetEnd:(void *)a1;

@end
