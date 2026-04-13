@interface REMWidgetDataViewFetchModelInvocationResult : REMStoreInvocationResult {
    void /* unknown type, empty encoding */ accountStorages;
    void /* unknown type, empty encoding */ listStorages;
    void /* unknown type, empty encoding */ reminderStorages;
    void /* unknown type, empty encoding */ additionalReminderCount;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
