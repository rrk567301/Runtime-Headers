@interface ICAirDropDocument : NSObject <ICAirDropDocument> {
    struct Document { void /* function */ **_vptr$MessageLite; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } _unknown_fields_; unsigned int _has_bits_[1]; int _cached_size_; struct NoteDocument *notedocument_; struct LegacyNoteDocument *legacynotedocument_; } _document;
}

@property (readonly, nonatomic) char hasDocumentForNote;
@property (readonly, nonatomic) char hasDocumentForLegacyNote;
@property (readonly, nonatomic) id activityItem;

+ (char)canAirDropImportIntoAccount:(id)a0 context:(id)a1;
+ (id)documentAtURL:(id)a0;
+ (id)legacyNoteAirDropDocumentWithData:(id)a0;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id).cxx_construct;
- (void *)document;
- (id)dataFromLegacyNoteDocument;

@end
