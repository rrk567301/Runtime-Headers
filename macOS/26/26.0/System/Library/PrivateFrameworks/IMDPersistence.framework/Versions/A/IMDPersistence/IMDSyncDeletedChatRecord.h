@class NSString, NSDate;

@interface IMDSyncDeletedChatRecord : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ guid;
    void /* function */ ckRecordID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *guid;
@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic) long long rawDate;
@property (nonatomic, readonly) NSDate *date;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGUID:(id)a0 ckRecordID:(id)a1 date:(id)a2;

@end
