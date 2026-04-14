@interface MTRCommissionableBrowserResultInterfaces : NSObject

@property (nonatomic) struct Optional<chip::Dnssd::CommonResolutionData> { BOOL mHasValue; union Value { struct CommonResolutionData { struct InterfaceId { unsigned int mPlatformInterface; } interfaceId; unsigned long long numIPs; struct IPAddress { unsigned int Addr[4]; } ipAddress[5]; unsigned short port; char hostName[17]; BOOL supportsTcp; struct Optional<bool> { BOOL mHasValue; union Value { BOOL mData; } mValue; } isICDOperatingAsLIT; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mrpRetryIntervalIdle; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mrpRetryIntervalActive; struct Optional<std::chrono::duration<unsigned short, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned short, std::ratio<1, 1000>> { unsigned short __rep_; } mData; } mValue; } mrpRetryActiveThreshold; } mData; } mValue; } resolutionData;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
