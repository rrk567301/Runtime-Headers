@class NSArray, _TtC21DocumentUnderstanding11DUDebugInfo;

@interface DocumentUnderstanding.DUTopicDetectionResponse : NSObject <NSCoding, NSCopying> {
    void /* function */ globalTopics;
    void /* function */ personalTopics;
}

@property (nonatomic, copy) NSArray *globalTopics;
@property (nonatomic, copy) NSArray *personalTopics;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
