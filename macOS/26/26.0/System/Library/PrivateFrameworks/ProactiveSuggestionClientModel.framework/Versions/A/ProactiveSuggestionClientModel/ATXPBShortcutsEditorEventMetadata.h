@interface ATXPBShortcutsEditorEventMetadata : PBCodable <NSCopying> {
    struct { unsigned char numStepsInShortcut : 1; } _has;
}

@property (nonatomic) BOOL hasNumStepsInShortcut;
@property (nonatomic) unsigned int numStepsInShortcut;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
