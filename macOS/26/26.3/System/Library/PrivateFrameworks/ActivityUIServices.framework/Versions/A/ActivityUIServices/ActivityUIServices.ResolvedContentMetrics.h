@class NSString;

@interface ActivityUIServices.ResolvedContentMetrics : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ edgeInsets;
}

@property (nonatomic, readonly) NSString *description;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (id)init;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
