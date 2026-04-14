@class _TtC21DocumentUnderstanding26DUGlobalTopicSetIdentifier, NSString, NSArray;

@interface DocumentUnderstanding.DUTopicResult : NSObject <NSCoding, NSCopying> {
    void /* function */ topicIdentifier;
    void /* function */ topicNames;
}

@property (nonatomic, retain) _TtC21DocumentUnderstanding26DUGlobalTopicSetIdentifier *topicSet;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic) double topicConfidence;
@property (nonatomic, copy) NSArray *topicNames;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)init;

@end
