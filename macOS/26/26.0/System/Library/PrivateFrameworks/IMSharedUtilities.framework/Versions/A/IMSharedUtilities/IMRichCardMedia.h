@class NSString, NSNumber;

@interface IMRichCardMedia : NSObject <IMAttributableContent> {
    void /* function */ mediaUrl;
    void /* function */ mediaContentType;
    void /* function */ thumbnailUrl;
    void /* function */ thumbnailContentType;
    void /* function */ contentDescription;
}

@property (nonatomic, readonly) NSString *mediaUrl;
@property (nonatomic, readonly) NSString *mediaContentType;
@property (nonatomic, readonly) NSNumber *mediaFileSize;
@property (nonatomic, readonly) NSString *thumbnailUrl;
@property (nonatomic, readonly) NSString *thumbnailContentType;
@property (nonatomic, readonly) NSNumber *thumbnailFileSize;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) NSString *contentDescription;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMediaUrl:(id)a0 mediaContentType:(id)a1 mediaFileSize:(id)a2 thumbnailUrl:(id)a3 thumbnailContentType:(id)a4 thumbnailFileSize:(id)a5 height:(long long)a6 contentDescription:(id)a7;

@end
