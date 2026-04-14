@class NSString, NSNumber, NSArray;

@interface IMDExportedMessageRecordAssociationMap : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ guid;
    void /* unknown type, empty encoding */ associatedMessageID;
    void /* unknown type, empty encoding */ threadOriginatorMessageID;
    void /* unknown type, empty encoding */ chatID;
    void /* unknown type, empty encoding */ handleID;
    void /* unknown type, empty encoding */ attachmentIDs;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSNumber *associatedMessageID;
@property (nonatomic, readonly) NSNumber *threadOriginatorMessageID;
@property (nonatomic, readonly) NSNumber *chatID;
@property (nonatomic, readonly) NSNumber *handleID;
@property (nonatomic, readonly) NSArray *attachmentIDs;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithGUID:(id)a0;

@end
