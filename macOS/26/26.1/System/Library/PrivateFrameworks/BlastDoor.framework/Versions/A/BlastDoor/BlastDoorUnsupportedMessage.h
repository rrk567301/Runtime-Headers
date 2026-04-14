@class NSString, NSArray;

@interface BlastDoorUnsupportedMessage : NSObject {
    void /* unknown type, empty encoding */ unsupportedMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (void).cxx_destruct;
- (id)init;

@end
