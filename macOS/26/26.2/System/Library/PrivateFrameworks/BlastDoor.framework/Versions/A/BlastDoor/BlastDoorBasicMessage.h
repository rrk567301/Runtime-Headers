@class NSString, NSAttributedString, NSArray;

@interface BlastDoorBasicMessage : NSObject {
    void /* unknown type, empty encoding */ basicMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) NSString *plainTextSubject;
@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (void).cxx_destruct;
- (id)init;

@end
