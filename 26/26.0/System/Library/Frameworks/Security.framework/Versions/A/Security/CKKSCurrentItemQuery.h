@class NSString;

@interface CKKSCurrentItemQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSString *accessGroup;
@property (retain) NSString *zoneID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 accessGroup:(id)a1 zoneID:(id)a2;

@end
