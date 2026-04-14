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

- (void)setKeywords:(id)a0;
- (id)keywords;
- (void)setAuthor:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (id)author;
- (void)setTitle:(id)a0;
- (id)comments;
- (void)setComments:(id)a0;
- (id)hyperlinkBase;
- (void)setHyperlinkBase:(id)a0;

@end
