@class NSString, NSUUID;

@interface BlastDoorLiteTapback : NSObject {
    void /* unknown type, empty encoding */ liteTapback;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUUID *associatedMessageUUID;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) NSString *associatedMessageEmoji;

- (void).cxx_destruct;
- (id)init;

@end
