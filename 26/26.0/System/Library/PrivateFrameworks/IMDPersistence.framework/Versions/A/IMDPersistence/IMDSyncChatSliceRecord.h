@class NSString;

@interface IMDSyncChatSliceRecord : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ serviceName;
    void /* function */ ckRecordID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, copy) NSString *ckRecordID;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 ckRecordID:(id)a1;

@end
