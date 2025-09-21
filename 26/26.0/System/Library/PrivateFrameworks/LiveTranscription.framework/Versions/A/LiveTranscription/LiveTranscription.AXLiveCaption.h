@class NSString, _TtC17LiveTranscription23AXLiveCaptionSourceInfo, NSDate, NSAttributedString;

@interface LiveTranscription.AXLiveCaption : NSObject {
    void /* unknown type, empty encoding */ timeStamp;
    void /* function */ caption;
    void /* unknown type, empty encoding */ attributedText;
}

@property (nonatomic, readonly) NSDate *timeStamp;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSAttributedString *textWithConfidence;
@property (nonatomic, readonly) _TtC17LiveTranscription23AXLiveCaptionSourceInfo *source;
@property (nonatomic, readonly) long long assetState;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
