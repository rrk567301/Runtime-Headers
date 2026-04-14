@class NSString, NSArray, NSURL, NSDate, _TtC21DocumentUnderstanding21DUDocumentMessageData, _TtC21DocumentUnderstanding18DUDocumentHTMLData;

@interface DocumentUnderstanding.DURawDocument : NSObject <NSCoding, NSCopying> {
    void /* function */ headline;
    void /* function */ subHeadline;
    void /* function */ version;
    void /* function */ creator;
    void /* function */ abstract;
    void /* function */ comment;
    void /* function */ text;
    void /* function */ inLanguage;
    void /* function */ keywords;
    void /* function */ identifier;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ thumbnailUrl;
    void /* unknown type, empty encoding */ significantLink;
    void /* unknown type, empty encoding */ dateCreated;
    void /* unknown type, empty encoding */ dateModified;
    void /* function */ documentUIElements;
}

@property (nonatomic, copy) NSString *headline;
@property (nonatomic, copy) NSString *subHeadline;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *creator;
@property (nonatomic, copy) NSString *abstract;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *inLanguage;
@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSURL *thumbnailUrl;
@property (nonatomic, copy) NSURL *significantLink;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateModified;
@property (nonatomic, retain) _TtC21DocumentUnderstanding21DUDocumentMessageData *documentMessageData;
@property (nonatomic, copy) NSArray *documentUIElements;
@property (nonatomic, retain) _TtC21DocumentUnderstanding18DUDocumentHTMLData *documentHTMLData;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
