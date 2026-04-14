@class NSArray;

@interface EDIndexedItems : NSObject {
    void /* function */ messages;
    void /* function */ updatedMessages;
    void /* function */ dataDetectionItems;
    void /* function */ attachments;
    void /* function */ richLinks;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSArray *messages;
@property (nonatomic, readonly) NSArray *updatedMessages;
@property (nonatomic, readonly) NSArray *dataDetectionItems;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSArray *richLinks;

- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0;
- (id)initWithIndexableItems:(id)a0;
- (id)init;

@end
