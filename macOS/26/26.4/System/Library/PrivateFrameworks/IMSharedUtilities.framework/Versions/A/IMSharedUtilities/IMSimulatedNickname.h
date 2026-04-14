@class NSString, NSData, NSDate;

@interface IMSimulatedNickname : IMSimulatedEntry

@property (retain, nonatomic) NSString *cachedGUID;
@property (retain, nonatomic) NSString *recordID;
@property (retain, nonatomic) NSData *decryptionKey;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)guid;
- (id)createSimulatedEntry;
- (id)initWithRecordID:(id)a0 decryptionKey:(id)a1 sender:(id)a2 handles:(id)a3;

@end
