@class NSString;

@interface DocumentUnderstanding.DUUserInterfaceUnderstandingResult : NSObject <NSCoding, NSCopying> {
    void /* function */ topicIdentifier;
}

@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic) double topicConfidence;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)init;

@end
