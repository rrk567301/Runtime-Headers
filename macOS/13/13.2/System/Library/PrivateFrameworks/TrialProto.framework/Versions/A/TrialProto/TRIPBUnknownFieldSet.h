@interface TRIPBUnknownFieldSet : NSObject <NSCopying> {
    struct __CFDictionary { } *fields_;
}

+ (BOOL)isFieldTag:(int)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (void)addField:(id)a0;
- (void)writeToCodedOutputStream:(id)a0;
- (void)addUnknownMapEntry:(int)a0 value:(id)a1;
- (unsigned long long)serializedSize;
- (BOOL)hasField:(int)a0;
- (id)getField:(int)a0;
- (unsigned long long)countOfFields;
- (id)sortedFields;
- (void)writeAsMessageSetTo:(id)a0;
- (unsigned long long)serializedSizeAsMessageSet;
- (id)mutableFieldForNumber:(int)a0 create:(BOOL)a1;
- (void)mergeUnknownFields:(id)a0;
- (void)mergeFromData:(id)a0;
- (void)mergeVarintField:(int)a0 value:(int)a1;
- (BOOL)mergeFieldFrom:(int)a0 input:(id)a1;
- (void)mergeMessageSetMessage:(int)a0 data:(id)a1;
- (void)mergeFromCodedInputStream:(id)a0;
- (void)getTags:(int *)a0;

@end
