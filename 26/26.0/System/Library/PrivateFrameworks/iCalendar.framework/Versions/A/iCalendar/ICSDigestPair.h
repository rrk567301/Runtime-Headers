@class NSData;

@interface ICSDigestPair : NSObject

@property (retain, nonatomic) NSData *unprocessedDigest;
@property (retain, nonatomic) NSData *processedDigest;

+ (id)digestPairWithSerializedData:(id)a0;

- (id)serializedData;
- (void).cxx_destruct;

@end
