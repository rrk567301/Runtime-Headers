@interface DocumentUnderstanding.DUGlobalTopicSetIdentifier : NSObject <NSCoding, NSCopying>

@property (nonatomic) long long topicSetName;
@property (nonatomic) long long topicSetVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;

@end
