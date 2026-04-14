@class NSString;

@interface BTCloudAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isSignedIn;
@property (nonatomic) BOOL manateeAvailable;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSString *loginID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
