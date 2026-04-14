@class NSString, NSDate;

@interface BoxedMISProfile : NSObject

@property (retain) NSString *UUID;
@property (retain) NSString *TeamID;
@property (retain) NSString *Name;
@property (retain) NSDate *Expires;
@property unsigned char ProvisionsAllDevices;
@property unsigned char AppleInternal;
@property unsigned char Local;
@property unsigned char Beta;

+ (id)fromSQLStatement:(struct sqlite3_stmt { } *)a0 withMap:(id)a1;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 withTeamID:(id)a1 withName:(id)a2 withExpiry:(id)a3 isUniversal:(unsigned char)a4 isAppleInternal:(unsigned char)a5 isLocal:(unsigned char)a6 isBeta:(unsigned char)a7;

@end
