@interface GKViceroyNATTypeHelper : NSObject

@property (class, readonly) unsigned long long initialNATType;
@property (class, readonly) unsigned long long forceRelayNATType;

+ (char)isClosed:(unsigned long long)a0;
+ (char)isUnknown:(unsigned long long)a0;

@end
