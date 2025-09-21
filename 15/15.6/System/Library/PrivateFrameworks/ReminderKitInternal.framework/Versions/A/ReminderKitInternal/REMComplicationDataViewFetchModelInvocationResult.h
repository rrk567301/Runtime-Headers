@interface REMComplicationDataViewFetchModelInvocationResult : REMStoreInvocationResult {
    void /* unknown type, empty encoding */ accountStorages;
    void /* unknown type, empty encoding */ listStorages;
    void /* unknown type, empty encoding */ reminderStorages;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
