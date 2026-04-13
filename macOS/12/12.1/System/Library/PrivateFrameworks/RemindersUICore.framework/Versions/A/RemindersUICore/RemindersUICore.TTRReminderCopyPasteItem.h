@interface RemindersUICore.TTRReminderCopyPasteItem : NSObject <NSSecureCoding, NSPasteboardWriting, NSPasteboardReading> {
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ storages;
    void /* unknown type, empty encoding */ titles;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

+ (id)readableTypesForPasteboard:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (id)writableTypesForPasteboard:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
