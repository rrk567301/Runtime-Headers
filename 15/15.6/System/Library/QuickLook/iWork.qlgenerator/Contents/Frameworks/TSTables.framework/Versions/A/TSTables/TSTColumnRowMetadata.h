@class TSWPParagraphStyle, TSTCellStyle;

@interface TSTColumnRowMetadata : TSCKSosBase {
    struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } _columnRowUID;
    char _definedCellStyle;
    char _definedTextStyle;
}

@property (readonly, nonatomic) TSTCellStyle *cellStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *textStyle;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic) unsigned char hidingAction;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char hasHeaderContent;

+ (id)metadata;
+ (id)metadataWithUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })columnRowUID;
- (id)initWithSize:(double)a0 hidingAction:(unsigned char)a1 cellStyle:(id)a2 textStyle:(id)a3 columnRowUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a4;
- (id)metadataWithUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (char)migrateStylesToDocument:(id)a0;

@end
