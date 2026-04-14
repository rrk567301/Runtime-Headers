@class ATXPBContextualActionsGroupedUIFeedbackResult;

@interface ATXShortcutsEditorGroupedUIFeedbackResult : ATXProactiveSuggestionGroupedUIFeedbackResult <NSSecureCoding, ATXProtoBufWrapper> {
    ATXPBContextualActionsGroupedUIFeedbackResult *_proto;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numShortcutsAtStart;
@property (nonatomic) unsigned long long numShortcutsAtEnd;
@property (nonatomic) unsigned long long numManuallyAddedSteps;

- (id)jsonDict;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithProto:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToATXContextualActionsGroupedUIFeedbackResult:(id)a0;

@end
