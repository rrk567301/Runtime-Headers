@class NSMutableOrderedSet;

@interface MRTransactionPacketAccumulator : NSObject {
    NSMutableOrderedSet *_packets;
    unsigned long long _currentLength;
}

- (void).cxx_destruct;
- (id)init;
- (id)mergePacket:(id)a0;

@end
