@class NSString, NSArray, NSData, NSDate, NSNumber, KTAccountPublicID;

@interface KTIDSData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *uri;
@property (retain) NSString *application;
@property (retain) NSData *ktAccountKey;
@property (retain) NSArray *identities;
@property (retain) NSNumber *ktOptChangeReason;
@property (retain) NSString *traceUUID;
@property (retain) NSDate *idsResponseTime;
@property (readonly) KTAccountPublicID *publicID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentities:(id)a0 uri:(id)a1 application:(id)a2 ktAccountKey:(id)a3;

@end
