@interface NDManagedFeedItemPoolOptions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ preferredCount;
    void /* unknown type, empty encoding */ preferredOrder;
    void /* unknown type, empty encoding */ preferredFilterOptions;
    void /* unknown type, empty encoding */ preferredESLRatio;
    void /* unknown type, empty encoding */ includeAllFromTagIDs;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
