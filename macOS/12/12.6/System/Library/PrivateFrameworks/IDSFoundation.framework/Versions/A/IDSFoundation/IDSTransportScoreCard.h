@interface IDSTransportScoreCard : NSObject {
    unsigned long long score;
    long long stunTransport;
    long long transportInterface;
    unsigned int interfaceIndex;
    BOOL alreadySelected;
    BOOL isIPv6;
}

@end
