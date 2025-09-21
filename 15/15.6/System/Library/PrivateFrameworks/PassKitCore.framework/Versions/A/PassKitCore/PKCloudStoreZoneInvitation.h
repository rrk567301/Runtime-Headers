@class NSString, NSURL, NSData, NSDate;

@interface PKCloudStoreZoneInvitation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) NSData *shareInvitationToken;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSDate *dateCreated;

+ (id)cloudStoreZoneInvitationWithProtobuf:(id)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)protobuf;
- (char)isEqualToCloudStoreZoneInvitation:(id)a0;

@end
