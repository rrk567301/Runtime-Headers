@class NSString, NSDate;

@interface IMAttachment : NSObject {
    NSString *_guid;
    NSString *_path;
    BOOL _isSticker;
    BOOL _isTransferComplete;
    NSDate *_createdDate;
}

- (id)description;
- (void).cxx_destruct;
- (id)path;
- (id)guid;
- (id)createdDate;
- (BOOL)isSticker;
- (id)initWithPath:(id)a0 guid:(id)a1 createdDate:(id)a2 isSticker:(BOOL)a3 isTransferComplete:(BOOL)a4;
- (id)fileTransfer;
- (id)initWithPath:(id)a0 guid:(id)a1;
- (BOOL)isTransferComplete;

@end
