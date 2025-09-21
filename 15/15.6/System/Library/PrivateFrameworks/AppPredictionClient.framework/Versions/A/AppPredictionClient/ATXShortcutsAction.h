@class WFContextualAction, NSString, ATXActionCriteria, CSSearchableItem;

@interface ATXShortcutsAction : NSObject <NSSecureCoding, ATXSuggestionExecutableProtocol> {
    ATXActionCriteria *_criteria;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WFContextualAction *contextualAction;
@property (readonly, nonatomic) ATXActionCriteria *criteria;
@property (readonly, nonatomic) CSSearchableItem *searchableItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToAction:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)contextualActionGetDirections;
- (id)initWithContextualAction:(id)a0 criteria:(id)a1;

@end
