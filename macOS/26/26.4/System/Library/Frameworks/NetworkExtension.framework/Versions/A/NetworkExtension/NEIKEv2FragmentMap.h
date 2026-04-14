@class NSMutableArray, NEIKEv2Packet;

@interface NEIKEv2FragmentMap : NSObject {
    unsigned short _currentCount;
    unsigned short _expectedCount;
    unsigned int _aggregatedPayloadsLength;
    NEIKEv2Packet *_firstFragment;
    NSMutableArray *_fragments;
}

- (void).cxx_destruct;

@end
