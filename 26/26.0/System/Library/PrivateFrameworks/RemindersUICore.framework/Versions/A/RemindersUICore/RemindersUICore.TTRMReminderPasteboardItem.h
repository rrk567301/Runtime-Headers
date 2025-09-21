@interface RemindersUICore.TTRMReminderPasteboardItem : NSObject <NSPasteboardReading, NSPasteboardWriting, NSSecureCoding> {
    void /* unknown type, empty encoding */ objectID;
    void /* unknown type, empty encoding */ accountID;
    void /* unknown type, empty encoding */ listID;
    void /* unknown type, empty encoding */ parentReminderID;
    void /* unknown type, empty encoding */ isFromRecentlyDeletedList;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

+ (id)readableTypesForPasteboard:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;

@end
