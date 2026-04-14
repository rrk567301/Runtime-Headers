@class NSString, BlastDoorLiteTapback;

@interface BlastDoorLiteRelayTextMessage : NSObject {
    void /* unknown type, empty encoding */ liteRelayTextMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) BlastDoorLiteTapback *tapback;
@property (nonatomic, readonly) NSString *chatIdentifier;

- (void).cxx_destruct;
- (id)init;

@end
