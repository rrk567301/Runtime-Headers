@class ATXPBShortcutsEditorEventMetadata;

@interface ATXShortcutsEditorEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper> {
    ATXPBShortcutsEditorEventMetadata *_proto;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long numStepsInShortcut;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDict;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithNumStepsInShortcut:(unsigned long long)a0;
- (char)isEqualToATXShortcutsEditorEventMetadata:(id)a0;

@end
