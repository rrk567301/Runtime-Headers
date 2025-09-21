@class NSString, NSNumber, NSDate;

@interface IDSGameCenterData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *contactsAssociationID;
@property (retain, nonatomic) NSNumber *contactsSharingState;
@property (retain, nonatomic) NSDate *contactsLastUpdatedDate;
@property (readonly, nonatomic) char supportsFriendingViaPush;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualTo:(id)a0;
- (id)compareAgainstData:(id)a0;
- (id)initWithAssociationID:(id)a0 sharingState:(id)a1 lastUpdatedDate:(id)a2;
- (id)initWithAssociationID:(id)a0 sharingState:(id)a1 lastUpdatedDate:(id)a2 supportsFriending:(char)a3;

@end
