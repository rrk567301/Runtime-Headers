@class NSString;

@interface BTCloudAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isSignedIn;
@property (nonatomic) char manateeAvailable;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSString *loginID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
