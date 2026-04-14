@interface WindowManagement.WMSEncodableArray : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ array;
    void /* unknown type, empty encoding */ itemClass;
}

@property (nonatomic, readonly) long long hash;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;

@end
