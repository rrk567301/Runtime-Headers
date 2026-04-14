@class IMDMessageStore, IMDAccount;

@interface IMTextMessageProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount *_account;
    IMDMessageStore *_messageStore;
}

- (void).cxx_destruct;
- (void)_configureAccountForMessageItem:(id)a0 input:(id)a1;
- (unsigned long long)computeFlagsForInput:(id)a0;
- (id)createMessageItemWithInput:(id)a0;
- (id)initWithMessageStore:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
