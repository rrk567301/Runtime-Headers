@class NSString, NSDictionary;

@interface IMDIndexableAttachmentRecord : NSObject

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *attributionInfo;
@property (readonly, nonatomic, getter=isCommSafetySensitive) BOOL commSafetySensitive;
@property (readonly, nonatomic, getter=isSticker) BOOL sticker;
@property (readonly, nonatomic) NSString *uti;
@property (readonly, nonatomic) long long previewGenerationState;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithAttachmentRecord:(id)a0;

@end
