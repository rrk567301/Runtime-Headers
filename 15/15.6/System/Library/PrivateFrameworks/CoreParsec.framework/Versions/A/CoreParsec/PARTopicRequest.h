@class NSArray;

@interface PARTopicRequest : PARRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *topics;
@property (nonatomic) double timeoutIntervalForRequest;
@property (readonly, retain) NSArray *localTopics;
@property (readonly, retain) NSArray *queryTopicContexts;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)nwActivityLabel;
- (Class)responseClass;

@end
