@class NSOutputStream, NSString, EAAccessory, NSInputStream;

@interface EASession : NSObject {
    unsigned int _sessionID;
    BOOL _openCompleted;
    int _sock;
    BOOL _useSocketInterfaceForEASession;
    NSString *_eaSessionUUIDFromCoreAccessories;
}

@property (readonly, nonatomic) EAAccessory *accessory;
@property (readonly, nonatomic) NSString *protocolString;
@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream;

- (id)_shortDescription;
- (void)dealloc;
- (id)init;
- (id)description;
- (unsigned int)_sessionID;
- (id)EASessionUUID;
- (BOOL)isOpenCompleted;
- (void)_endStreams;
- (void)_handleIncomingEAData:(id)a0;
- (void)_streamClosed;
- (id)initWithAccessory:(id)a0 forProtocol:(id)a1;
- (void)setOpenCompleted:(BOOL)a0;

@end
