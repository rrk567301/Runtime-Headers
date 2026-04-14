@class NSString, NSArray, NSAttributedString;

@interface LiveTranscription.AXLTCaption : NSObject {
    void /* function */ appID;
    void /* function */ appName;
    void /* function */ time;
    void /* function */ text;
    void /* function */ segments;
    void /* unknown type, empty encoding */ attributedText;
    void /* function */ placeholder;
}

@property (nonatomic, readonly) long long id;
@property (nonatomic, readonly) NSString *appID;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, copy) NSString *time;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSArray *segments;
@property (nonatomic, readonly) NSAttributedString *textWithConfidence;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic) long long actionType;
@property (nonatomic) long long resultType;
@property (nonatomic) BOOL privileged;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCaption:(id)a0;
- (id)initWithId:(long long)a0 appID:(id)a1 appName:(id)a2 time:(id)a3 text:(id)a4 segments:(id)a5 placeholder:(id)a6 actionType:(long long)a7;
- (id)initWithId:(long long)a0 liveCaption:(id)a1;

@end
