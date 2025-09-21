@interface IDSTransportScoreCard : NSObject <NSCopying> {
    unsigned long long score;
    long long stunTransport;
    long long transportInterface;
    unsigned int interfaceIndex;
    char alreadySelected;
    char isIPv6;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
