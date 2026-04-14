@class NSString;

@interface SEService.ESIMProfileInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ iccid;
    void /* unknown type, empty encoding */ exactSize;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
