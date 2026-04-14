@class ATXPBShortcutsEditorEventMetadata;

@interface ATXShortcutsEditorEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper> {
    ATXPBShortcutsEditorEventMetadata *_proto;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numStepsInShortcut;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)init;
- (id)initWithNumStepsInShortcut:(unsigned long long)a0;
- (BOOL)isEqualToATXShortcutsEditorEventMetadata:(id)a0;

@end
