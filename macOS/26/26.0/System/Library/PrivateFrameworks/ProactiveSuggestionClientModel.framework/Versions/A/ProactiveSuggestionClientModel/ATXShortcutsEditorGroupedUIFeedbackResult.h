@class ATXPBContextualActionsGroupedUIFeedbackResult;

@interface ATXShortcutsEditorGroupedUIFeedbackResult : ATXProactiveSuggestionGroupedUIFeedbackResult <NSSecureCoding, ATXProtoBufWrapper> {
    ATXPBContextualActionsGroupedUIFeedbackResult *_proto;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numShortcutsAtStart;
@property (nonatomic) unsigned long long numShortcutsAtEnd;
@property (nonatomic) unsigned long long numManuallyAddedSteps;

- (BOOL)isValid;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)jsonDict;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToATXContextualActionsGroupedUIFeedbackResult:(id)a0;

@end
