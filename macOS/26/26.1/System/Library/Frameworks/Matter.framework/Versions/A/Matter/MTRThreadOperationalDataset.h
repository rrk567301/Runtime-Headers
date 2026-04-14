@class NSString, NSData, NSNumber;

@interface MTRThreadOperationalDataset : NSObject {
    struct OperationalDataset { struct Span<const unsigned char> { char *mDataBuf; unsigned long long mDataLen; } mData; unsigned char mBuffer[254]; } _cppThreadOperationalDataset;
}

@property (nonatomic) unsigned short channel;
@property (readonly, copy, nonatomic) NSString *networkName;
@property (readonly, copy, nonatomic) NSData *extendedPANID;
@property (readonly, copy, nonatomic) NSData *masterKey;
@property (readonly, copy, nonatomic) NSData *PSKc;
@property (readonly, copy, nonatomic) NSNumber *channelNumber;
@property (readonly, copy, nonatomic) NSData *panID;

- (id)initWithData:(id)a0;
- (id).cxx_construct;
- (id)data;
- (void).cxx_destruct;
- (id)initWithNetworkName:(id)a0 extendedPANID:(id)a1 masterKey:(id)a2 PSKc:(id)a3 channel:(unsigned short)a4 panID:(id)a5;
- (BOOL)_checkDataLength:(id)a0 expectedLength:(unsigned long long)a1;
- (BOOL)_populateCppOperationalDataset;
- (id)initWithNetworkName:(id)a0 extendedPANID:(id)a1 masterKey:(id)a2 PSKc:(id)a3 channelNumber:(id)a4 panID:(id)a5;

@end
