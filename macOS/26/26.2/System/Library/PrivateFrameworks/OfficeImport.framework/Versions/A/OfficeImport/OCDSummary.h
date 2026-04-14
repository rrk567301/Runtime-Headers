@class NSString;

@interface OCDSummary : NSObject {
    NSString *mTitle;
    NSString *mAuthor;
    NSString *mKeywords;
    NSString *mComments;
    NSString *mHyperlinkBase;
}

@property (retain) NSString *subject;
@property (retain) NSString *company;

- (id)title;
- (void)setKeywords:(id)a0;
- (id)author;
- (id)keywords;
- (void).cxx_destruct;
- (void)setAuthor:(id)a0;
- (void)setTitle:(id)a0;
- (id)comments;
- (void)setComments:(id)a0;
- (id)hyperlinkBase;
- (void)setHyperlinkBase:(id)a0;

@end
