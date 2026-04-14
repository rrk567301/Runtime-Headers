@class NSString, NSData, NSDate;

@interface IMSimulatedNickname : IMSimulatedEntry

@property (retain, nonatomic) NSString *cachedGUID;
@property (retain, nonatomic) NSString *recordID;
@property (retain, nonatomic) NSData *decryptionKey;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)guid;
- (id)description;
- (id)init;
- (id)createSimulatedEntry;
- (id)initWithRecordID:(id)a0 decryptionKey:(id)a1 sender:(id)a2 handles:(id)a3;

@end
