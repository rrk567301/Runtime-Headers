@class NSData;

@interface CryptoKitPrivate.KVACPresentationWrapper : NSObject {
    void /* unknown type, empty encoding */ serverKeyId;
    void /* unknown type, empty encoding */ tag;
    void /* unknown type, empty encoding */ prefix;
    void /* unknown type, empty encoding */ presentationData;
}

@property (nonatomic, readonly) NSData *serverKeyId;
@property (nonatomic, readonly) NSData *tag;
@property (nonatomic, readonly) NSData *prefix;
@property (nonatomic, readonly) NSData *presentationData;

- (id)init;
- (void).cxx_destruct;

@end
