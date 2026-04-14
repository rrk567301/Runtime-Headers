@class PPTopicRecord;

@interface PPTopicWithRecord : PPTopic {
    PPTopicRecord *_mostRelevantRecord;
}

- (double)sentimentScore;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mostRelevantRecord;
- (id)initWithTopicIdentifier:(id)a0 mostRelevantRecord:(id)a1;
- (void).cxx_destruct;

@end
