@class ATXPBContextualActionsGroupedUIFeedbackResult;

@interface ATXShortcutsEditorGroupedUIFeedbackResult : ATXProactiveSuggestionGroupedUIFeedbackResult <NSSecureCoding, ATXProtoBufWrapper> {
    ATXPBContextualActionsGroupedUIFeedbackResult *_proto;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numShortcutsAtStart;
@property (nonatomic) unsigned long long numShortcutsAtEnd;
@property (nonatomic) unsigned long long numManuallyAddedSteps;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithProto:(id)a0;
- (id)description;
- (id)encodeAsProto;
- (id)init;
- (BOOL)isEqualToATXContextualActionsGroupedUIFeedbackResult:(id)a0;

@end
