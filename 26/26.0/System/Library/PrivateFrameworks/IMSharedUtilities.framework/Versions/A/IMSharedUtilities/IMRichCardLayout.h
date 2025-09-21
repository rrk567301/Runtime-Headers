@class IMRichCardStyle, NSString;

@interface IMRichCardLayout : NSObject <IMAttributableContent> {
    void /* function */ cardStyleUrl;
}

@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) long long imageAlignment;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) IMRichCardStyle *titleStyle;
@property (nonatomic, readonly) IMRichCardStyle *descriptionStyle;
@property (nonatomic, readonly) NSString *cardStyleUrl;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOrientation:(long long)a0 imageAlignment:(long long)a1 width:(long long)a2 titleStyle:(id)a3 descriptionStyle:(id)a4 cardStyleUrl:(id)a5;

@end
