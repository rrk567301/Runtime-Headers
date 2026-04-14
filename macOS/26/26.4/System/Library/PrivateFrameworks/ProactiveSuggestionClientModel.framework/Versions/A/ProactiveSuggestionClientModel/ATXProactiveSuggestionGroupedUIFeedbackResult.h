@class ATXPBProactiveSuggestionGroupedUIFeedbackResult, NSDate;

@interface ATXProactiveSuggestionGroupedUIFeedbackResult : NSObject <NSSecureCoding, ATXProtoBufWrapper> {
    ATXPBProactiveSuggestionGroupedUIFeedbackResult *_proto;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numSessionsWithEngagedSuggestions;
@property (readonly, nonatomic) unsigned long long numSessionsWithRejectedSuggestions;
@property (readonly, nonatomic) unsigned long long numSessionsWithAbandonedSuggestions;
@property (readonly, nonatomic) unsigned long long numEngagedSuggestions;
@property (readonly, nonatomic) unsigned long long numRejectedSuggestions;
@property (readonly, nonatomic) unsigned long long numAbandonedSuggestions;
@property (nonatomic) BOOL isGroupSessionComplete;
@property (readonly, nonatomic) NSDate *startDateOfFirstSession;
@property (readonly, nonatomic) NSDate *endDateOfLastSession;

- (id)jsonDict;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithProto:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToATXProactiveSuggestionGroupedUIFeedbackResult:(id)a0;
- (void)updateWithIntermediateSessionResults:(id)a0;

@end
