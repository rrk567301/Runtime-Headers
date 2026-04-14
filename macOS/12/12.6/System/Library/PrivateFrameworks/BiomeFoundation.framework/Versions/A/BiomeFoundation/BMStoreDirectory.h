@interface BMStoreDirectory : NSObject

+ (id)directoryForPublicStreams;
+ (id)directoryForPrivateStreams;
+ (id)directoryForRestrictedStreams;
+ (void)setBasePathForTestingWithPath:(id)a0;
+ (void)unsetBasePathForTesting;
+ (id)_directoryForType:(unsigned char)a0;

@end
