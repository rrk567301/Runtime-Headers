@class NSString, NSUUID, TPSRecordDataProvider, NSDate;

@interface TPSRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long privateCountID;
@property (retain, nonatomic) NSString *pluginID;
@property (retain, nonatomic) NSString *task;
@property (retain, nonatomic) NSUUID *recordUUID;
@property (nonatomic) unsigned long long recordCountID;
@property (retain, nonatomic) NSDate *date;
@property (weak, nonatomic) TPSRecordDataProvider *dataProvider;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)save;
- (id)recordInfo;
- (id)recordData;
- (id)initWithDate:(id)a0 pluginID:(id)a1 task:(id)a2;
- (id)recordDescription;
- (unsigned long long)getRecordCount;
- (void)unsave;

@end
