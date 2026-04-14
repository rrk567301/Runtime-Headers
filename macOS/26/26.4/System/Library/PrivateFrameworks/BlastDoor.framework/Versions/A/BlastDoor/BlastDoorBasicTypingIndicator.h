@class NSString, NSArray;

@interface BlastDoorBasicTypingIndicator : NSObject {
    void /* unknown type, empty encoding */ basicTypingIndicator;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isFinished;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (void).cxx_destruct;
- (id)init;

@end
