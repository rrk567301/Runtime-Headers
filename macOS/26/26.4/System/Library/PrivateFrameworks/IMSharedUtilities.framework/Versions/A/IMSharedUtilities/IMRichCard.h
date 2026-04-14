@class IMRichCardMedia, NSString, IMRichCardLayout, IMUrlToTransferMap, IMChipList;

@interface IMRichCard : NSObject <IMAttributableContent, NSCopying> {
    void /* function */ title;
    void /* function */ cardDescription;
}

@property (nonatomic, readonly) IMRichCardLayout *layout;
@property (nonatomic, readonly) IMRichCardMedia *media;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *cardDescription;
@property (nonatomic, readonly) IMChipList *chipList;
@property (nonatomic, retain) IMUrlToTransferMap *urlToTransferMap;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithLayout:(id)a0 media:(id)a1 title:(id)a2 cardDescription:(id)a3 chipList:(id)a4;
- (id)relayDictionaryRepresentation;
- (void)updateUrlToTransferMap:(id)a0;

@end
