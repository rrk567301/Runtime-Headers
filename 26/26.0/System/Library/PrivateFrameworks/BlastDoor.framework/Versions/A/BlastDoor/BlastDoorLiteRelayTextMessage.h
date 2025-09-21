@class NSString;

@interface BlastDoorLiteRelayTextMessage : NSObject {
    void /* unknown type, empty encoding */ liteRelayTextMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) NSString *chatIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
