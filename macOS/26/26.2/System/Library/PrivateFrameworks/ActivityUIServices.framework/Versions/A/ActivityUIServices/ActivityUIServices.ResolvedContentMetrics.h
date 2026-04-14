@class NSString;

@interface ActivityUIServices.ResolvedContentMetrics : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ edgeInsets;
}

@property (nonatomic, readonly) NSString *description;

+ (BOOL)supportsBSXPCSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (id)init;

@end
