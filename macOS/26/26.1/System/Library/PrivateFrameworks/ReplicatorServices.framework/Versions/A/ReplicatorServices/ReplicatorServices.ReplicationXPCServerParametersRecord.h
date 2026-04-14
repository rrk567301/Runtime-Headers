@class NSString;

@interface ReplicatorServices.ReplicationXPCServerParametersRecord : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ values;
    void /* unknown type, empty encoding */ expiration;
    void /* unknown type, empty encoding */ options;
}

@property (nonatomic, readonly) NSString *description;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsBSXPCSecureCoding;
- (id)init;

@end
