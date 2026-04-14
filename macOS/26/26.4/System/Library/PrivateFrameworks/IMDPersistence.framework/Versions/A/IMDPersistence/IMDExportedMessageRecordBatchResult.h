@class NSDictionary, NSArray;

@interface IMDExportedMessageRecordBatchResult : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ pendingAssociations;
    void /* unknown type, empty encoding */ missingMessageGUIDs;
    void /* unknown type, empty encoding */ messageRecords;
    void /* unknown type, empty encoding */ chatRecords;
    void /* unknown type, empty encoding */ handleRecords;
    void /* unknown type, empty encoding */ attachmentRecords;
    void /* unknown type, empty encoding */ messageIDToAssociations;
    void /* unknown type, empty encoding */ exportedMessageIDs;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDictionary *messageRecords;
@property (nonatomic, readonly) NSDictionary *chatRecords;
@property (nonatomic, readonly) NSDictionary *handleRecords;
@property (nonatomic, readonly) NSDictionary *attachmentRecords;
@property (nonatomic, readonly) NSDictionary *messageIDToAssociations;
@property (nonatomic, readonly) NSArray *exportedMessageIDs;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
