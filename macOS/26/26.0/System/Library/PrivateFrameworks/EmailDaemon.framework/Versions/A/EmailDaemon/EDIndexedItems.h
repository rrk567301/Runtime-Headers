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

- (id)init;
- (id)initWithIndexedItems:(id)a0;
- (void).cxx_destruct;

@end
