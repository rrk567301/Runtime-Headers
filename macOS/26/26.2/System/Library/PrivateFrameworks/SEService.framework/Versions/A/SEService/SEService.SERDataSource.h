@class NSString;

@interface SEService.SERDataSource : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ credentialSizes;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
