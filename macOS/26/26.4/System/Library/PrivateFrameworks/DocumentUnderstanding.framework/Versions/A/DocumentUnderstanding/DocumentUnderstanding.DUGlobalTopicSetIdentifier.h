@interface DocumentUnderstanding.DUGlobalTopicSetIdentifier : NSObject <NSCoding, NSCopying>

@property (nonatomic) long long topicSetName;
@property (nonatomic) long long topicSetVersion;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
